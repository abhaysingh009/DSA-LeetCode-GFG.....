/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  void fun(Node*root,vector<vector<int>>&res){
      if(root==NULL)return;
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
          vector<int>v;
          int n=q.size();
          while(n--){
              Node*temp=q.front();q.pop();
              v.push_back(temp->data);
              if(temp->left!=NULL){
                  q.push(temp->left);
              }
              if(temp->right!=NULL){
                  q.push(temp->right);
              }
          }
          res.push_back(v);
          
      }
      
  }
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>>res;
        fun(root,res);
        return res;
        
    }
};