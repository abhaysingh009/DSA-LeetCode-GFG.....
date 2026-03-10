/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int minValue(Node* root) {
        Node* temp=root;
        while(temp->left){
            temp=temp->left;
        }
        return temp->data;
        
    }
};