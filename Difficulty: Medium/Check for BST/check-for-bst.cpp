/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void pre(Node*root,vector<int>&temp){
        if(root==NULL) return ;
        
        pre(root->left,temp);
        temp.push_back(root->data);
        pre(root->right,temp);
        
      
  }
    bool isBST(Node* root) {
        vector<int>res;
        pre(root,res);
        
        for(int i=0;i<res.size()-1;i++){
            if(res[i]>res[i+1]){
                return false;
            }
        }
        return true;
        
    }
};