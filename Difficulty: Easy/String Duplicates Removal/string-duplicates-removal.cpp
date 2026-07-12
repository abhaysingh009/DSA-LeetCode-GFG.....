class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        vector<bool>up(26,0);
        vector<bool>lo(26,0);
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]<97){
                if(up[s[i]-'A']) continue;
                else {
                    up[s[i]-'A']=1;
                    ans+=s[i];
                }
            }else{
                if(lo[s[i]-'a']) continue;
                else {
                    lo[s[i]-'a']=1;
                    ans+=s[i];
                
                }
            }
                
        }
            return ans;
    }
};