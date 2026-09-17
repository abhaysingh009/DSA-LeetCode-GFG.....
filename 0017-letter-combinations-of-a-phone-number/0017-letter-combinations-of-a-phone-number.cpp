class Solution {
public:
    map<char,string>mp;
    void solve(int idx,string &digits,string &temp,vector<string>&ans){
        if(idx>=digits.size()){
            ans.push_back(temp);
            return ;
        }
        char ch=digits[idx];
        string st=mp[ch];
        for(int i=0;i<st.size();i++){
            temp.push_back(st[i]);
            solve(idx+1,digits,temp,ans);
            temp.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string &digits) {
        vector<string>ans;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        string temp="";
        solve(0,digits,temp,ans);
        return ans;
        }
};