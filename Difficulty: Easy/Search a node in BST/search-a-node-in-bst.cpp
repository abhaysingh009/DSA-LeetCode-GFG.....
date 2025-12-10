/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int k) {
          if(!root){
            return 0;
        }
        if(root->data==k){
            return 1;
        }
        if(root->data<k){
           return search(root->right,k);
        }
        else{
           return search(root->left,k);
        }
        // return root;
    }
};