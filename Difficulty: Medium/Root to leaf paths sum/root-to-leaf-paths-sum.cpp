/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
  void pre(Node *root,int &sum ,int s){
    if (!root)return;
    s= s*10+root->data;
    if(!root->left and !root->right){
        sum+=s;
        return ;
    }
    pre(root->left,sum,s);
    pre(root->right,sum,s);
}
    int treePathsSum(Node *root) {
        if (!root)return 0;
        int s=0;
        int sum=0;
        pre(root,sum,s);
        return sum;
    }
};

