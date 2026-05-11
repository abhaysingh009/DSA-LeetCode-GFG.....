class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>arr;
        for(int i:nums){
            string st =to_string(i);
                
            for(int i=0;i<st.size();i++){
                arr.push_back(st[i]-'0');
            }
        }
        return arr;
        
    }
};