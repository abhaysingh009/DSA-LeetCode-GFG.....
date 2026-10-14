class Solution {
public:

// striver 
// tc=O(n);
// sc=O(n)
    void helper(vector<char>&s,int i,vector<char>&st){
        if(i<0)return ;
        st.push_back(s[i]);
        return helper(s,i-1,st);
    }
    void reverseString(vector<char>& s) {
        vector<char>st;
        helper(s,s.size()-1,st);
        s=st;
        
    }
};