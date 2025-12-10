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
    TreeNode* insertIntoBST(TreeNode* root, int k) {
        if(!root){
            TreeNode* temp=new TreeNode(k);
            return temp;
        }
        if((root->val)<k){
          root->right=  insertIntoBST(root->right,k);
        }
        else{
          root->left=  insertIntoBST(root->left,k);

        }
        return root;
        
    }
};