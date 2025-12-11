/*
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
  Node* insert(vector<int>&v,int first,int last){
      if(first>last){
          return nullptr;
      }
      
      int mid=(first+last)/2;
      
      Node* root=new Node(v[mid]);
      root->left=insert(v,first,mid-1);
      root->right=insert(v,mid+1,last);
      return root;
      
  }
    Node* sortedArrayToBST(vector<int>& arr) {
        return insert(arr,0,arr.size()-1); 
      
        
    }
};