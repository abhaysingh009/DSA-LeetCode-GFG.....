/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        Node* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        temp=head;
        count/=2;
        while(count--){
            temp=temp->next;
        }
        return temp->data;
        
    }
};