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
    void fun(TreeNode *root,int &ans,int &prev){
        if(!root)return;

        fun(root->left,ans,prev);
       if(prev!=INT_MIN)
        ans =min(ans,root->val-prev);
        prev=root->val;
        fun(root->right,ans,prev); 


    }
    int getMinimumDifference(TreeNode* root) {

        int ans=INT_MAX;
        int prev=INT_MIN;
        fun(root,ans,prev);
        return ans;
        
    }
};