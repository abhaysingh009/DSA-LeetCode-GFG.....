// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string s) {
        stack <int>st;
        vector<int>res;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                res.push_back(count);
                st.push(count);
                
            }
            else if(s[i]==')'){
                res.push_back(st.top());
                st.pop();
                
            }
        }
        return res;
    }
};