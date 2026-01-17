class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' and s[i]<='Z'){
                int x=s[i]-65;
                char c=97+x;
                s[i]=c;
            }
        }
        return s;
        
    }
};