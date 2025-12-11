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
TreeNode* insert(vector<int>&v,int first,int last){
    if(first>last){
        return nullptr;
    }
    int mid=(first+last)/2;
    TreeNode* root=new TreeNode(v[mid]);
   root->left=insert(v,first,mid-1);
   root->right=insert(v,mid+1,last);

    return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
       return insert(nums,0,nums.size()-1); 
    }
};