class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        for (int i=0;i<s.size();i++){
            string temp="";
            int count=0;
            while(i<s.size() and count!=k){
                 temp+=s[i];
                count++;
                ++i;
            }
            i--;
            
            ans.push_back(temp);

        }
        while(ans[ans.size()-1].size()!=k)ans[ans.size()-1]+=fill;
        return ans;
    }
};