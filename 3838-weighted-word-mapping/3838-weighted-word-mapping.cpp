class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(string s:words){
            int w=0;
            for(int i=0;i<s.size();i++){
                    int x=s[i]-'a';
                    w+=weights[x];

            }
            w%=26;
            char c=(97+25)-w;
            ans+=c;
        }
        return ans;
        
    }
};