class Solution {
  public:
    string removeSpaces(string& s) {
        string ans="";
        for(char c:s){
            if(c!=' '){
                ans+=c;
            }
        }
        return ans;
        
    }
};