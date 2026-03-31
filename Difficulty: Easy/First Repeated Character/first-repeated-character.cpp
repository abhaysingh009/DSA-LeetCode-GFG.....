class Solution {
  public:
    string firstRepChar(string s) {
        vector<int>fr(26,0);
        string ans="";
        for(char c:s){
            fr[c-97]++;
            if(fr[c-97]>1){
                return ans+=c;
            }
        }
       
        return "-1";
    }
};