/* The structure of the Node is
struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};
*/

class Solution {
  public:
  
  
//calculate height------------------------------------
int getHeight(Node*root){
    if(!root)return 0;
    return root->height;
}

//Left Rotation
Node* leftRotation(Node* root){
    
      Node *child=root->right;
      Node* childLeft=child->left;
      child->left=root;
      root->right=childLeft;

      //update height
      root->height=1+max(getHeight(root->left),getHeight(root->right));
      child->height=1+max(getHeight(child->left),getHeight(child->right));
      
    return child;

}
//right Rotation
Node* rightRotation(Node*root){
  Node *child=root->left;
  Node *childRight=child->right;

  child->right=root;
  root->left=childRight;

  //update height
  root->height=1+max(getHeight(root->left),getHeight(root->right));
  child->height=1+max(getHeight(child->left),getHeight(child->right));

  return child;

}

//check balance of node-------------------------------
int getBalance(Node*root){
    return getHeight(root->left)-getHeight(root->right);

}


  
    /*You are required to complete this method */
    Node* insertToAVL(Node* root, int val) {
         if(!root){
        return new Node(val);
    }
    //create tree
    if(val<root->data){
        root->left=insertToAVL( root->left,val);
        
    }else{
        root->right=insertToAVL( root->right,val);
    }

    //Update height----------------------------------------
    root->height=1+max(getHeight(root->left),getHeight(root->right));

    
    //check Balancing
    int balance=getBalance(root);

    //LL
    if(balance>1 and val<root->left->data){
       return rightRotation(root);
    }

    //RR
    else  if(balance<-1 and val>root->right->data){
       return  leftRotation(root);
        
    }
    
    //LR
    else if(balance>1 and val>root->left->data){
        root->left=leftRotation(root->left);
        return rightRotation(root);
        
        
    }
    
    //Rl
   else  if(balance<-1 and val<root->right->data){
        root->right= rightRotation(root->right);
        return leftRotation(root);

       
   }

    // Already Balanced
    else{
        return root;
    }
    }


};
    




