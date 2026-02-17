class Solution {
  public:
    // Function to find the maximum element from array a[] and
    // the minimum element from array b[] and return their product.
    long long find_multiplication(vector<int> &arr1, vector<int> &arr2) {
        int greatest=INT_MIN;
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]>greatest){
                greatest=arr1[i];
            }
        }
        int small=INT_MAX;
        for(int i=0;i<arr2.size();i++){
            if(arr2[i]<small){
                small=arr2[i];
            }
        }
        return small*greatest;
        
    }
};