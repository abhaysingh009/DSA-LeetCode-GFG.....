class Solution {
public:
    int evalRPN(vector<string>& t) {

        stack<int>st;
        for(int i=0;i<t.size();i++){
            if(t[i]=="+"){
                int num1=st.top();st.pop();
                int num2=st.top();st.pop();
                st.push(num1+num2);
            }
             else if(t[i]=="-"){
                int num1=st.top();st.pop();
                int num2=st.top();st.pop();
                st.push(num2-num1);
            }
            else if(t[i]=="*"){
                int num1=st.top();st.pop();
                int num2=st.top();st.pop();
                st.push(num1*num2);
            }else if(t[i]=="/"){
                int num1=st.top();st.pop();
                int num2=st.top();st.pop();
                st.push(num2/num1);
            }
            else{
                st.push(stoi(t[i]));
            }
        }
        return st.top();
        
    }
};