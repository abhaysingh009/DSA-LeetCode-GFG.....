/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
            Node *temp=head;
        if(head->next==NULL){
            head=head->next;
            delete temp;
            return head;
        }
        int n=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        n/=2;
        temp=head;
        while(--n){
            temp=temp->next;
            
        }
            Node *temp2=temp->next;
            temp->next=temp2->next;
            delete temp2;
        return head;
        
    }
};