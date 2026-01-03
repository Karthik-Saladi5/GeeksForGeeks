/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node* merge(Node* a, Node* b){
        if(!a) return b;
        if(!b) return a;
        Node* m;
        if(a->data < b->data){
            m=a;
            m->bottom = merge(a->bottom,b);
        }else{
            m=b;
            m->bottom=merge(a,b->bottom);
        }
        m->next=NULL;
        return m;
    }
    Node *flatten(Node *root) {
        // code here
        if(!root || !root->next) return root;
        root->next = flatten(root->next);
        root = merge(root,root->next);
        return root;
    }
};