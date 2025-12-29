/*struct Node
{
    int data;
    Node *left, *right;
};*/

Node* BST(int post[],int lower,int upper,int &idx){
    if(idx<0)return nullptr;
    if(post[idx]<lower || post[idx]>upper)return nullptr;
    
    Node *root=new Node(post[idx--]);
 
    root->right=BST(post,root->data,upper,idx);
    root->left=BST(post,lower,root->data,idx);
    return root;
}
Node *constructTree(int post[], int size) {
   int idx=size-1;
   return BST(post,INT_MIN,INT_MAX,idx);
    
}