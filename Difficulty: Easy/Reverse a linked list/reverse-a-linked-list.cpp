/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
       vector<int>v;
       Node*temp=head;
       while(temp){
           v.push_back(temp->data);
           temp=temp->next;
       }
       //v=[1,2,3,4]
       temp=head;
       for(int i=v.size()-1;i>=0;i--){
          temp->data=v[i]; 
          temp=temp->next;
       }
       return head;
        
    }
};