/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
  void helper(Node*root,int&count){
        if(!root){
            return;
        }
        if(root->left!=NULL || root->right!=NULL)
        count++;
        helper(root->left,count);
        helper(root->right,count);
       
   }
    int countNonLeafNodes(Node* root) {
        int count=0;
        helper(root,count);
        return count;
        
    }
};