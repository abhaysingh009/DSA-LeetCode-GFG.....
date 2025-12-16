// User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more
// than the max key in BST, return -1
void fun(Node* root,int &k,int &sum){
        if(!root) return;
         
        fun(root->left,k,sum);
        if(k)
        sum+=root->data;
        else return;
        k-=1;
        fun(root->right,k,sum);
    
}
int sum(Node* root, int k) {
    int sum=0;
    fun(root,k,sum);
    return sum;
   

    
    
}