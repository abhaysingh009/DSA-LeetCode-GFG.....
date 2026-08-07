class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int ,int>freq;
        int repeated,missing;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>1)repeated=nums[i];
        }
        for(int i=1;i<=nums.size();i++){
            if(!freq.count(i)){
                missing=i;
                break;
            }
        }
        return {repeated,missing};

        
    }
};