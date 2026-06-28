class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        for(int i:s1){
            f1[i-'a']++;
        }
        for(int i:s2){
            f2[i-'a']++;
        }
        string ans="";
        for(int i=0;i<26;i++){
            if(f1[i]==0 and f2[i]!=0){
                ans+=char(i+97);
            }
            else if(f2[i]==0 and f1[i]!=0){
                ans+=char(i+97);
            }
        }
        return ans;
    }
};
