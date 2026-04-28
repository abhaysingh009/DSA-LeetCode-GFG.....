class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n=arr.size(); 
        int totalSum=0;
        for(int e:arr){
            totalSum+=e;
            
        }
        int leftSum=0;
        int rightsum=0;
        for(int i=0;i<n;i++){
            rightsum=totalSum-arr[i]-leftSum;
            if(rightsum==leftSum){
                return i;
            }
            leftSum+=arr[i];
            
        }
        return -1;
        
    }
};