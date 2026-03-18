/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        //if one elem exist
        if(head->next==NULL and x==1){
            Node* temp=head;
            head=head->next;
            delete temp;
            return NULL ;
        }
        //delete head
        if(x==1){
            Node *temp=head;
            head=head->next;
            head->prev=NULL;
            delete temp;
            return head;
        }
        //move at specific pos
        Node *temp=head;
        while(--x){
            temp=temp->next;
        }
        //last pos
        if(temp->next==NULL){
            Node* temp2=temp;
            temp=temp->prev;
            temp->next=NULL;
            delete temp2;
            return head;
        }
        //specific pos
        Node* temp2=temp;
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp2;
        return head;
        
    }
};