class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;

        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp+=s[i];
            }else {
                // while(i<s.size() and s[i]==' ')i++;
                if(temp!="")ans.push_back(temp);
                temp="";
            }
        }
        ans.push_back(temp);
        reverse(ans.begin(), ans.end());
        string st="";
        for(string c:ans){
            st+=c;
            st+=' ';
        }
        st.erase(0,st.find_first_not_of(' '));
        st.erase(st.find_last_not_of(' ')+1);
        return st;
    }
};