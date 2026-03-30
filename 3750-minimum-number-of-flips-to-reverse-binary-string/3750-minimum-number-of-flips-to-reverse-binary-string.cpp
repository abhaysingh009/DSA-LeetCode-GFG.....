class Solution {
    string bin(int n){
        string ans="";
        while(n>0){
            int rem=n%2;
            ans+=to_string(rem);
            n/=2;

        }
        return ans;
    }
public:
    int minimumFlips(int n) {
        string s=bin(n);
        string x=s;
        int ans=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=x[i]){
                ans++;
            }
        }
        return ans;
    }
};