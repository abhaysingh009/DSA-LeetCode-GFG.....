class Solution {
  public:
    string toLower(string& s) {
        string ans="";
        for(char c:s){
            if(c<97){
                ans+=char(c+32);
            }else ans+=c;
        }
        return ans;
        
    }
};