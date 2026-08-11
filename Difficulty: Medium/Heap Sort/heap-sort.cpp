// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
  void heapify(vector<int>&arr,int i,int n){
      int x=i;
      int left=2*i+1;
      int right =2*i+2;
      
      if(left<n and arr[left]>arr[x]){
          x=left;
      }
      if(right<n and arr[right]>arr[x]){
         x= right;
      }
      
      if(i!=x){
          swap(arr[i],arr[x]);
          heapify(arr,x,n);
      }
      
  }
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=((n/2)-1);i>=0;i--){
            heapify(arr,i,n);
        }
        
        for(int i=n-1;i>=0;i--){
            swap(arr[0],arr[i]);
            heapify(arr,0,i);
        }
        
    }
};