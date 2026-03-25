/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        
        Node*temp=head;
        // Node*temp2=head;
        while(true){
            if(temp->next==head){
                return true;
            }
            if(temp->next==NULL){
                return false;
            }
            temp=temp->next;
        }
        return 1;
        
        
    }
};