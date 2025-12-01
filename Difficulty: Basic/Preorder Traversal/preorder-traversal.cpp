/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    vector<int> v;

    void fun(Node* root){
        if(root == NULL) return;

        v.push_back(root->data);
        fun(root->left);
        fun(root->right);
    }

    vector<int> preOrder(Node* root) {
        v.clear();       
        fun(root);
        return v;
    }
};
