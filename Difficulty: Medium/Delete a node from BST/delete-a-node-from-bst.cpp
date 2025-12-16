/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* delNode(Node* root, int x) {
        if(!root)return nullptr;
        
        if(root->data>x){
            root->left=delNode(root->left,x);
            return root;
        }
        else if(root->data<x){
            root->right=delNode(root->right,x);
            return root;
        }
        else{
            //if to delete leaf node
            if(!root->right and !root->left){
                delete root;
                return nullptr;
            }
            //if to delte node with one child
            //if left exist
            else if(!root->right){
                Node *temp=root->left;
                delete root;
                return temp;
            }
            //if right exist
            else if(!root->left){
                Node *temp=root->right;
                delete root;
                return temp;
            }
            else{//if both child exist
                Node* child=root->left;
                Node* parent =root;
                //find rightmost element 
                while(child->right){
                    parent=child;
                    child=child->right;
                }
                //if root and parent are not same
                if(root!=parent){
                    parent->right=child->left;
                    child->left=root->left;
                    child->right=root->right;
                    delete root;
                    return child;
                }
                //if root and parent are same
                else if(root==parent){
                    child->right=root->right;
                    delete root;
                    return child;
                }
                
                
            }
        }
        
    }
};