class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int PrevSum=0;
        int MaxSum=0;
        for(int i=0;i<k;i++){
            PrevSum+=arr[i];
            
        }
        MaxSum = PrevSum;
        int i=0;
        int j=k;
        while(j<n){
            int temp=PrevSum;
            temp-=arr[i];
            temp+=arr[j];
            MaxSum = max(MaxSum,temp);
            PrevSum = temp;
            i++;
            j++;
        }
        return MaxSum;
    }
};