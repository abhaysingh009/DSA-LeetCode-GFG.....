/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* createDLL(vector<int>& arr) {
        Node* head= new Node(arr[0]);
        Node *temp=head;
        for(int i=1;i<arr.size();i++){
            Node *t=new Node(arr[i]);
            temp->next=t;
            t->prev=temp;
            temp=temp->next;
        }
        
        return head;
        
    }
};