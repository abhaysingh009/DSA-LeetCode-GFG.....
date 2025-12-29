// User function Template for C++

class Solution {
  public:
  void BST(int arr[],int lower,int upper,int &idx,int n){
      if(idx==n)return;
      if(arr[idx]<lower || arr[idx]>upper)return ;
      
      int value=arr[idx++];
      BST(arr,lower,value,idx,n);
      BST(arr,value,upper,idx,n);
  }
    int canRepresentBST(int arr[], int size) {
        int idx=0;
        BST(arr,INT_MIN,INT_MAX,idx,size);
        
        return idx==size;
        
    }
};