class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();

        for (int i=0;i<=n;i++){
            int count =0;
            for(int e:nums){
                if (e>=i){count++;

                }
            }
            if (count==i){return i;}
        }
        return -1;
        
    }
};