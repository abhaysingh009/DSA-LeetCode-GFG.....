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
int calculateHeight(TreeNode* root){
    if(!root)return 0;
    if(!root->left and !root->right)return 1;
    return 1+max(calculateHeight(root->right),calculateHeight(root->left));
}
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        int leftH=0;
        int rightH=0;
       
       leftH= calculateHeight(root->left);
       rightH= calculateHeight(root->right);
       int diff=abs(leftH-rightH);

       if(diff>1){
        return false;
       }
       return isBalanced(root->left) and isBalanced(root->right);
        
    }
};