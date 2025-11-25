class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                st.push(s[i]);
            }
            else{
                 if(!st.empty()){
                st.pop();
                }
            }
        }
        s="";
        while(!st.empty()){
            s+=st.top();st.pop();

        }



        stack <char> st1;
        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                st1.push(t[i]);
            }
            else{
                if(!st1.empty()){
                st1.pop();
                }
            }
        }
        t="";
        while(!st1.empty()){
            t+=st1.top();st1.pop();

        }
        return s==t;
    }
};