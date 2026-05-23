/* Structure for Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
 int helper(Node*root){
      if(!root)return 0;
      int curr=root->data;
      int leftSum=helper(root->left);
      int rightSum=helper(root->right);
      root->data=leftSum+rightSum;
      return curr+root->data;
  }
    void toSumTree(Node *root) {
        helper(root);
        
    }
};