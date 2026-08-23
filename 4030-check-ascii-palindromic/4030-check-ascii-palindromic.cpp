class Solution {
public:
bool isst(string s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i])return 0;
    }
    return 1;
}
    bool isPalindromic(string s) {
        int n=s.size();
        string st="";

        for(int m=0;m<n;m++){
        for(int i=7 ;i>=0;i--){
            st=st+char('0'+(s[m]>>i)&1);
        }
        }
        return isst(st);

        
    }
};