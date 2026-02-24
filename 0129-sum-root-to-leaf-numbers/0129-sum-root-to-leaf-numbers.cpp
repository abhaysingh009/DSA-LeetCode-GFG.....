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
void pre(TreeNode *root,int &sum ,string s){
    if (!root)return;
    s+=to_string(root->val);
    if(!root->left and !root->right){
        sum+=stoi(s);
        return ;
    }
    pre(root->left,sum,s);
    pre(root->right,sum,s);
}
    int sumNumbers(TreeNode* root) {
        string s="";
        int sum=0;
        pre(root,sum,s);
        return sum;

    }
};