class Solution {
public:
string d2b(int n){
    string res="";
    while(n>0){
        int rem=n%2;
        res+=to_string(rem);
        n/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}
int b2d(string s){
    int ans=0;
    int n=s.size()-1;
    int k=n;
    for(int i=0;i<=n;i++){
        int x=pow(2,i);
        ans=ans+(s[n-i]-'0')*x;
    }
    return ans;
}
string Alternate(string s){
    for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s[i]='1';
            }else{
                s[i]='0';
            }
        }
        return s;
}
    int bitwiseComplement(int n) {
    if(n==0)return 1;
        string bin=d2b(n);//convert in binary
        string st=Alternate(bin);//flip bits
        int res=b2d(st);//convert to decimal
        
        return res;
    }
};