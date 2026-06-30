class Solution {
  public:

    string firstAlphabet(string &s) {
        // code here
        string ans="";
        ans+=s[0];
        int p=0;
        for(char c:s){
            if(p==1)ans+=c;
            
            if(c==' ')p=1;
            else p=0;
        }
        return ans;
    }
};