// User function Template for C++

class Solution {
  public:
    int findSum(int A[], int N) {
        int maxi=INT_MIN;
        int smal=INT_MAX;
        for(int i=0;i<N;i++){
            if(A[i]>maxi){
                maxi=A[i];
            }
            if(A[i]<smal){
                smal=A[i];
            }
        }
        return maxi+smal;
    }
};