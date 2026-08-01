class Solution {
  public:
    int secFrequent(vector<string> &arr) {
        map<string,int>freq;
        for(string s:arr){
            freq[s]++;
        }
        int fm=INT_MIN;
        int sm=-1;
        for(auto it:freq){
            int x=it.second;
            if(x>fm){
                sm=fm;
                fm=x;
            }
            if(x<fm and x>sm){
                sm=x;
            }
        }
        return sm==INT_MIN?-1:sm;
        
    }
};