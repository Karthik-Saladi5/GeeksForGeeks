/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    void reverse(struct Node* &head){
        if(head==NULL || head->next==NULL) return;
        struct Node* prev=NULL;
        struct Node* cur=head;
        struct Node* next;
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        head=prev;
    }
    void inAtBeg(struct Node* &head,int data){
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        while(num1->data==0 && num1->next!=NULL) num1=num1->next;
        while(num2->data==0 && num2->next!=NULL) num2=num2->next;
        reverse(num1);
        reverse(num2);
        struct Node* sum=NULL;
        int c=0;
        while(num1 || num2 || c){
            int s=c;
            if(num1){
                s+=num1->data;
                num1=num1->next;
            }
            if(num2){
                s+=num2->data;
                num2=num2->next;
            }
            inAtBeg(sum,s%10);
            c=s/10;
        }
        return sum;
    }
};

