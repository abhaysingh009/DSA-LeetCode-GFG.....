class Solution {
public:
bool isValid(string s){
    stack<char>st;
    int n=s.size();
    int i=0;
    while(i<n){
        if(s[i]=='(')st.push(s[i]);
        else if(st.empty())return 0;
        else {
            // if(st.top()=='(' and s[i]==')')st.pop();
            // else return 0;
            st.pop();
        }
        i++;
    }
    return st.empty();
}
// void helper(int n, vector<string>& ans, string temp){
//     int i=temp.size();
//     if(i==2*n){
//         if(isValid(temp))
//         ans.push_back(temp);
//         return ;
//     }
//     temp.push_back('(');
//     helper(n,ans,temp);
//     temp.pop_back();

//     temp.push_back(')');
//     helper(n,ans,temp);
//     temp.pop_back();


// }
// vector<string> generateParenthesis(int n) {
//         vector<string>ans;
//         helper(n,ans,"(");
//         return ans;   
//     }
// };
// second
void helper(int n , vector<string>&ans,string temp){
    if(temp.size()==2*n){
        if(isValid(temp))ans.push_back(temp);
        return ;
    }
    helper(n,ans,temp+'(');
    helper(n,ans,temp+')');
}
vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="(";
        helper(n,ans,temp);
        return ans;   
    }
};