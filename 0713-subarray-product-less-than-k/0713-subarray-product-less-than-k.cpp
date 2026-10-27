class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
    
// brute force time O(n*n);    
        // for(int i=0;i<n;i++){
        //     int prod=1;
        //     for(int j=i;j<n;j++){
        //         prod*=nums[j];
        //         if(prod<k)count++;
        //         else break;
        //     }
        // }
        // return count;

            int j=0;
            int prod=1;
            for(int i=0;i<n;i++){
                
                prod*=nums[i];
                while(j<=i and prod>=k){
                    prod/=nums[j++];
                }
                if(prod<k){
                    count+=(i-j+1);
                }
            }
            return count;


    }
};