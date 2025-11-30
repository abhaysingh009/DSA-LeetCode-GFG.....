/*

class Node {
public:
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
    bool areIdentical(Node *head1, Node *head2) {
        Node* temp1=head1;
         Node* temp2=head2;
         int counth1=0;
         int counth2=0;
         while(temp1){
             counth1++;
             temp1=temp1->next;
         }
         while(temp2){
             counth2++;
             temp2=temp2->next;
         }
         if(counth1!=counth2){
             return false;
         }
            temp1=head1;
            temp2=head2;
         
         while(temp1 || temp2){
             if(temp1->data!=temp2->data){
                 return false;
                 
             }
             temp1=temp1->next;
             temp2=temp2->next;
         }
         return true;
        
        
    }
};