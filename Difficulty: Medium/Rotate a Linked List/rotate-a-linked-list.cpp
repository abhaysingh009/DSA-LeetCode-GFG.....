/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
          
         if(head == NULL || head->next == NULL || k == 0){
            return head;
         }
       
            
        Node* temp=head;
        Node* temp2=head;
        int n=1;
        while(temp->next){
            temp=temp->next;
            n++;
        }
        k=k%n;
        if(!k)return head;
        temp->next=head;
        for(int i=0;i<k-1;i++){
            temp2=temp2->next;
        }
        Node *NewHead=temp2->next;
            
        temp2->next=NULL;
        return NewHead;
        
        
    }
};