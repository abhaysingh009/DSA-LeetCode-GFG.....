/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
 void InsertatLast(Node*&head,int x){
      if(head==NULL){
          head=new Node(x);
          return;
         
      }
      Node*temp=head;
      while(temp->next){
          temp=temp->next;
      }
      
      temp->next=new Node(x);
      
  }
  
Node* findIntersection(Node* head1, Node* head2) {
        Node* temp1=head1;
        Node* temp2=head2;
        Node*res=NULL;
        
        while(temp1 and temp2){
            if(temp1->data==temp2->data){
               InsertatLast(res,temp1->data); 
               temp1=temp1->next;
                temp2=temp2->next;
            }
            else if(temp1->data>temp2->data){
                temp2=temp2->next;
            }
            else{
              temp1=temp1->next;   
            }
        }
        return res;
    }
};


























