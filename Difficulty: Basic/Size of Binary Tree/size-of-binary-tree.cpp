/*
Definition for Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  void helper(Node* root , int &x){
      if(!root)return;
      x++;
      helper(root->left,x);
      helper(root->right,x);
  }
    int getSize(Node* root) {
        int x=0;
        helper(root,x);
        return x;
        
        
    }
};