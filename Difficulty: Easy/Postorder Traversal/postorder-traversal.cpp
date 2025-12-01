/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/



class Solution {
public:
vector<int>v;
void fun(Node* root){
     if(root==NULL){
            return;
        }
        fun(root->left);
        fun(root->right);
        v.push_back(root->data);

}
    vector<int> postOrder(Node* root) {
        v.clear();
       fun(root);
       return v;



        
    }
};