class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        vector<int>res;


        for(int e:nums){
            if(e%2==0){
                even.push_back(e);
            }
        }
        for(int e:nums){
            if(e%2!=0){
                odd.push_back(e);
            }
        }
        for(int i=0;i<nums.size()/2;i++){
            res.push_back(even[i]);
            res.push_back(odd[i]);

            
        }
        return res;
        
    }
};