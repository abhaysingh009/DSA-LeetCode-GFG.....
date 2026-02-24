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
void pre(TreeNode *root,int &sum ,int s){
    if (!root)return;
    s=s*10+root->val;
    if(!root->left and !root->right){
        sum+=s;
        return ;
    }
    pre(root->left,sum,s);
    pre(root->right,sum,s);
}
    int sumNumbers(TreeNode* root) {
        int s=0;
        int sum=0;
        pre(root,sum,s);
        return sum;

    }
};