class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1)return s;
        sort (s.begin(),s.end());
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        string ans="";
        char ce=' ';
        // if(n%2==0){
        for(int i=0;i<26;i++){
            if(freq[i]!=0)
            for(int k=0;k<(freq[i]/2);k++){
                ans+=char(i+97);
            }
            if(freq[i]%2!=0)ce=char(i+97);
        }
        // }
        string temp=ans;
        reverse(temp.begin(),temp.end());
        if(ce!=' ')ans+=ce;
        ans+=temp;
        return ans;
        
    }
};