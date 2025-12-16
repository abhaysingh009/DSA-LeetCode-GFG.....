/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void fun(Node* root,int &k,int &largest){
      if(!root)return ;
      
      fun(root->left,k,largest);
      if(!k)return;
      largest=root->data;
      k--;
      fun(root->right,k,largest);
      
  }
    int kthSmallest(Node *root, int k) {
        int ans=0;
        fun(root,k,ans);
        return (k==0)?ans:-1;
        // code here
        
    }
};