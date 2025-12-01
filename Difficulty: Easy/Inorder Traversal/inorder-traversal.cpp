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
    vector<int> v;

    void fun(Node* root){
        if(root == NULL) return;

        fun(root->left);
        v.push_back(root->data);
        fun(root->right);
    }
    vector<int> inOrder(Node* root) {
        v.clear();       
        fun(root);
        return v;
    }
};