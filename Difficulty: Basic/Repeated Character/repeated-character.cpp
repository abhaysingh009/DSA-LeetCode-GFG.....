class Solution {
  public:
    char firstRep(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        for(char c:s){
            if(freq[c-'a']>1)return c;
        }
        return  '#';
    }
};