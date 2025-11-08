class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> s1(nums.begin(),nums.end());
        vector<int>temp(s1.begin(),s1.end());
        if(temp.size()<3){
            return temp[temp.size()-1];
        }
        return temp[temp.size()-3];
        
    }
};