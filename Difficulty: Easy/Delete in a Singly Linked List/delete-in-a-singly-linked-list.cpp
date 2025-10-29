/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x==1){
            Node*temp;
            temp=head;
            head=head->next;
            delete temp;
        }
         else{
             Node *curr=head;
             Node *pre=NULL;
             x--;
             while(x--){
                 pre=curr;
                 curr=curr->next;
             }
             pre->next=curr->next;
             delete curr;
             
         }
         return head;
        
    }
};