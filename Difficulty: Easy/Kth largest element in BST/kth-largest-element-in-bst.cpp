/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
  void fun(Node* root,int &k,int &largest){
      if(!root)return ;
      
      fun(root->right,k,largest);
      if(!k)return;
      largest=root->data;
      k--;
      fun(root->left,k,largest);
      
  }
    int kthLargest(Node *root, int k) {
        int largest=0;
        fun(root,k,largest);
        return largest;
        
    }
};