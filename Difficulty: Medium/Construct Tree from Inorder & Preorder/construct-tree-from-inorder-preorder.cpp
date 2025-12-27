/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
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
  
  Node* Tree(vector<int>&in,vector<int>&pre,int inStart,int inEnd,int idx){
      if(inStart>inEnd)return nullptr;
      
      Node* root=new Node(pre[idx]);
      int pos=search(in,inStart,inEnd,pre[idx]);
      root->left=Tree(in,pre,inStart,pos-1,idx+1);
      root->right=Tree(in ,pre,pos+1,inEnd,idx+(pos-inStart)+1);
      return root;
  }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        int n=inorder.size();
        return Tree(inorder,preorder,0,n-1,0);
        
    }
};