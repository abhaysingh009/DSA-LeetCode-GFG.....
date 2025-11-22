/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        if(head->next==NULL)return true;
        Node* temp=head;
        vector<int>v;
        while(temp){
            v.push_back(temp->data);
            temp=temp->next;
            
        }
        reverse(v.begin(),v.end());
        
        temp=head;
        int i=0;
        while(temp){
            if(temp->data!=v[i++]){
                return false;
            }
            temp=temp->next;
        }
        return true;
        
        
    }
};