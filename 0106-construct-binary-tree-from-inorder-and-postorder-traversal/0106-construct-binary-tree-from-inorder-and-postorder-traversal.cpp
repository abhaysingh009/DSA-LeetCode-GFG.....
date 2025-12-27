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
TreeNode* Tree(vector<int>&in,vector<int>post,int inStart,int inEnd,int idx){
    if(inStart>inEnd)return nullptr;

    TreeNode *root=new TreeNode(post[idx]);
    int pos=search(in,inStart,inEnd,post[idx]);
    root->right=Tree(in,post,pos+1,inEnd,idx-1);
    root->left=Tree(in,post,inStart,pos-1,idx-(inEnd-pos)-1);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return Tree(inorder,postorder,0,postorder.size()-1,inorder.size()-1);
    }
};