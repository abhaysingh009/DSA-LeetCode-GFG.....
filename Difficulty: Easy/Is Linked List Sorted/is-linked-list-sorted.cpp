/*
class Node
{
  public:
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/

class Solution {
  public:
    bool isSorted(Node* head) {
    
        Node *temp=head;
        int prev=temp->data;
        temp=temp->next;
        bool inc=true;
        
        // check increasing
        while(temp){
            if(prev>temp->data){
                inc=false;break;
            }
            prev=temp->data;
            temp=temp->next;
            
        }
        
        // check for dec
        bool dec=true;
            temp=head;
            prev=temp->data;
            temp=temp->next;
            while(temp){
                if(prev < temp->data){
                    dec=false;break;
                }
             prev=temp->data;
             temp=temp->next;
            }
                
        return (inc || dec);
        
    }
};