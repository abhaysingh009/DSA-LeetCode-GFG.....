class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>pg(n);

        int cM=0; 
        for(int i=0;i<n;i++){
            cM=max(cM,nums[i]);
            pg[i]=gcd(nums[i],cM);
            
        }


        sort(pg.begin(),pg.end());
        int l=0;
        int r=n-1;
        long long res=0;

        while(l<r){
            int x=gcd(pg[l],pg[r]);
            res+=x;
            l++;
            r--;
        }
        return res;
    }
};