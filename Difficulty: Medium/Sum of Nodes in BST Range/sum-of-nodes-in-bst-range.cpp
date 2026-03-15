/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void pre(Node* root,int &sum,int l,int r){
      if(!root)return;
      pre(root->left,sum,l,r);
      if(root->data>=l and root->data<=r)sum+=root->data;
      pre(root->right,sum,l,r);
  }
    int nodeSum(Node* root, int l, int r) {
        int sum=0;
       pre (root,sum,l,r);
       return sum;
        
    }
};
