// User function template in C++

/*

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

*/

class Solution {
  public:
   Node* construct(int pre[],int &idx,int lower ,int upper,int n){
       if(idx==n)return nullptr;
       if(pre[idx]<lower ||pre[idx]>upper)return nullptr;
       
       Node *root=new Node();
       root->data=pre[idx++];
       root->left= construct(pre,idx,lower,root->data,n);
       root->right=construct(pre,idx,root->data,upper,n);
       return root;
   }
    Node* Bst(int pre[], int size) {
        int idx=0;
     return construct(pre,idx,INT_MIN,INT_MAX,size);
        
    }
};