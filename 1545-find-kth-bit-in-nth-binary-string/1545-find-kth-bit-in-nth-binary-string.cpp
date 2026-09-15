class Solution {
public:
string invert(string s){
   for(int i=0;i<s.size();i++){
    if(s[i]=='0')s[i]='1';
    else if(s[i]=='1')s[i]='0';
   }
    return s;
}
string helper(int n){
    if(n==1)return "0";
    string st=helper(n-1);
    string in=invert(st);
    reverse(in.begin(),in.end());
    return (st+"1"+in);
}
    char findKthBit(int n, int k) {
        string st=helper(n);
        return st[k-1];
    }
};