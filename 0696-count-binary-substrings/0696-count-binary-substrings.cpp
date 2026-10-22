class Solution {
public:
    int countBinarySubstrings(string s) {
        int c0=0;int c1=0;
        int ans=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                while(i<n and s[i]=='0'){
                    c0++;
                    i++;
                }
                ans+=min(c0,c1);
                c1=0;
                i--;
            }else {
                while(i<n and s[i]=='1'){
                 c1++;
                 i++;

                }
                ans+=min(c0,c1);
                c0=0;
                i--;
            }

        }
        return ans;
        
    }
};