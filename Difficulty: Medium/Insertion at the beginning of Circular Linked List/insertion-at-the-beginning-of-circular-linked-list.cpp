/* Structure of a Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/ 

class Solution {
  public:
    Node* insertAtBeginning(Node* tail, int key) {
        // code here
        Node* temp=new Node(key);
        temp->next=tail->next;
        tail->next=temp;
        return tail;
        
        
    }
};