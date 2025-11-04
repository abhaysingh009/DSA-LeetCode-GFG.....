// User function Template for C++

class Solution {
  public:
    int product(int arr[], int n) {
        int pr=1;
        for(int e=0;e<n;e++){
            pr*=arr[e];
            
        }
    return pr;
        
    }
};