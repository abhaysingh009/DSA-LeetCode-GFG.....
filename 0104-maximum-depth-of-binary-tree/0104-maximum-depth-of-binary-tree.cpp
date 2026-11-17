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
int helper(TreeNode* root){
    if(!root)return 0;
    int lef=0;int righ=0;
    if(root->left )
        lef=helper(root->left);
    if(root->right)
        righ=helper(root->right);
    return 1+ max(lef,righ);
}
    int maxDepth(TreeNode* root) {
        return helper(root);
    }
};