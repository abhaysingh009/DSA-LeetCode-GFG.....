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
int search(vector<int>&in,int st,int end,int t){
    for(int i=st;i<=end;i++){
        if(in[i]==t){
            return i;
        }
    }
    return -1;
}
TreeNode *Tree(vector<int>&pre,vector<int>&in,int inStart,int inEnd,int idx){
    if(inStart>inEnd)return nullptr;

    TreeNode *root=new TreeNode(pre[idx]);
    int pos=search(in,inStart,inEnd,pre[idx]);
    //left
    root->left=Tree(pre,in,inStart,pos-1,idx+1);
    //right
    root->right=Tree(pre,in,pos+1,inEnd,idx+(pos-inStart)+1);

    return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return Tree(preorder,inorder,0,inorder.size()-1,0);
        
    }
};