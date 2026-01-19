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

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        if(!head)return new Node(x);
        else{
            Node *temp=head;
            int size=0;
            while(temp){
                size++;
                temp=temp->next;
            }
            int pos=(size+1)/2;
            temp=head;
            
            while(pos>1){
                temp=temp->next;
                pos--;
              
            }
            Node* curr=new Node(x);
            curr->next=temp->next;
            temp->next=curr;
            
        }
        return head;
        
    }
};