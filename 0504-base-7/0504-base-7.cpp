class Solution {
public:
void reverse(string&s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-1-i]);
    }
}
    string convertToBase7(int num) {
        if(num==0)return "0";
        string ans="";
        int x=abs(num);
        while(x!=0){
        int quotient =x/7;
        int rem=x%7;
        ans+=to_string(rem);
        x=quotient;
        }
        reverse(ans);
        return (num<0)?"-"+ans:ans;
    }
};