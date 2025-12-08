/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
//   void helper(Node*root,int&count){
//         if(!root){
//             return;
//         }
//         if(root->left==NULL and root->right==NULL)
//         count++;
//         helper(root->left,count);
//         helper(root->right,count);
       
//   }
int helper(Node*root){
    if(root==NULL){
        return  0;
    }
    if(!root->left and !root->right)return 1;
    
   return helper(root->left)+helper(root->right);
    
    
}
    int countLeaves(Node* root) {
        
        return helper(root);
        
    }
};