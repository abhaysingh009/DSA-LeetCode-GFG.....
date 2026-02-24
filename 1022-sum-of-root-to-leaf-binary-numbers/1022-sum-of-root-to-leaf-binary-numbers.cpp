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
int binary(string s){
    int j=0;
    int ans=0;
    for(int i=s.size()-1;i>=0;i--){
        ans+=s[i]*pow(2,j);
        j++;


    }
    return ans;
}
void pre(TreeNode *root,string s,int &sum){
    if(!root)return;

    s+=root->val;
    if(!root->left and !root->right){
        sum+=binary(s);
        return;
    }
    pre(root->left,s,sum);
    pre(root->right,s,sum);
}

    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        string s="";
        pre(root,s,sum);
        return sum;
        

    }
};
    
