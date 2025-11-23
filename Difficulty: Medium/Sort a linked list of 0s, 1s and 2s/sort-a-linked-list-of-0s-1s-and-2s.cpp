/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
       vector<int>v0;
        vector<int>v1;
        vector<int>v2;
        
        Node* temp=head;
        while(temp){
            if(temp->data==0){
                v0.push_back(temp->data);
            }
            else if(temp->data==1){
                v1.push_back(temp->data);
            }
            else{
                v2.push_back(temp->data);
            }
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<v0.size();i++){
            temp->data=v0[i];
            temp=temp->next;
            
        }
        for(int i=0;i<v1.size();i++){
            temp->data=v1[i];
            temp=temp->next;
            
        }for(int i=0;i<v2.size();i++){
            temp->data=v2[i];
            temp=temp->next;
            
        }
        return head;
        
   }
};