class Solution {
  public:
    bool check(string s) {
        char c=s[0];
        int n=s.size();
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=c or s[n-1-i]!=c)return 0;
        }
        return 1;
    }
};