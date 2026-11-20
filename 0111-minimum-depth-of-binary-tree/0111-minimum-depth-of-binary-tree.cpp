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
// time comp O(n) space comp O(h)
int helper(TreeNode* root){
    if(!root)return 0;
    int lef=0;int righ=0;
    if(root->left )
        lef=1+helper(root->left);
    if(root->right)
        righ=1+helper(root->right);
        if(lef==0 and righ!=0)return righ;
        else if(righ==0 and lef!=0 )return lef;
        return min(lef,righ);
}
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        return helper(root)+1;
    //     we can also solve this using level order traversl where space comp will be in worst case O(n)
    //     in recursive version when tree is skewd then also space can go up to O(n)
    }
};