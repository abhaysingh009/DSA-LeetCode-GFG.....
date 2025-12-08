/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int getSize(Node* root) {
        queue<Node*>q;
        
        int count=0;
        q.push(root);
        while(!q.empty()){
            Node* temp=q.front();q.pop();
            count++;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        return count;
        
    }
};