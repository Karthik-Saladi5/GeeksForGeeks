/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        int n=0,rev=0;
        int m=1;
        while(head!=NULL){
            int b=head->data;
            n=n*10+b;
            rev=rev+(b*m);
            m*=10;
            head=head->next;
        }
        return rev==n;
    }
};


