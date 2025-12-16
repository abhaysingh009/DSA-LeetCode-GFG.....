/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

void fun(TreeNode* root,int &k,int &largest){
      if(!root)return ;
      
      fun(root->left,k,largest);
      if(!k)return;
      largest=root->val;
      k--;
      fun(root->right,k,largest);
      
  }
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        fun(root,k,ans);
        return ans;
        
    }
};