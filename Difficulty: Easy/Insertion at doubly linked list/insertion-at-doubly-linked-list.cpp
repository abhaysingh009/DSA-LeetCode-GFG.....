/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        if(!head)return new Node(x);
        
        Node *temp=head;
        Node *temp1=new Node(x);
        while(p--){
            temp=temp->next;
        }
        if(temp->next==NULL){
            temp->next=temp1;
            temp1->prev=temp;
            
        }else{
            temp1=new Node(x);
            temp1->prev=temp;
            temp1->next=temp->next;
            temp->next=temp1;
            temp1->next->prev=temp1;
        }
        return head;
        
    }
};