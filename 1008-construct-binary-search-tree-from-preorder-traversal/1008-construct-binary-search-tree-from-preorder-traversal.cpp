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
    TreeNode* BST(vector<int>&pre,int &idx,int lower,int upper){
        if(idx==pre.size())return nullptr;
        if(pre[idx]<lower || pre[idx]>upper)return nullptr;

        TreeNode *root=new TreeNode(pre[idx++]);
        root->left=BST(pre,idx,lower,root->val);
        root->right=BST(pre,idx,root->val,upper);
        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
        int idx=0;
        return BST(pre ,idx,INT_MIN,INT_MAX);
        
    }
};