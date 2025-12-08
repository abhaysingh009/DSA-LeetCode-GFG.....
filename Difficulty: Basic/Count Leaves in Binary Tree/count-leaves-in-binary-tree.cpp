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
   void helper(Node*root,int&count){
        if(!root){
            return;
        }
        if(root->left==NULL and root->right==NULL)
        count++;
        helper(root->left,count);
        helper(root->right,count);
       
   }
    int countLeaves(Node* root) {
        int count=0;
        helper(root,count);
        return count;
        
    }
};