/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
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
  
  Node* Tree(vector<int>&in,vector<int>&post,int inStart,int inEnd,int idx){
      if(inStart>inEnd)return nullptr;
      
      Node* root=new Node(post[idx]);
      int pos=search(in,inStart,inEnd,post[idx]);
      root->left=Tree(in,post,inStart,pos-1,idx-(inEnd-pos)-1);
      root->right=Tree(in ,post,pos+1,inEnd,idx-1);
      return root;
  }
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        int n=inorder.size();
        int idx=postorder.size()-1;
        return Tree(inorder,postorder,0,n-1,idx);
        
    }
};