// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        
        while(i<=j){
            if(arr[i]==1 and arr[j]==0){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            if(arr[i]==0)i++;
            if(arr[j]==1)j--;
        }
        
        
    }
};