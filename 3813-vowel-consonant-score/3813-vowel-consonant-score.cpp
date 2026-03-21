class Solution {
public:
    int vowelConsonantScore(string s) {
        int x=0;
        int v=0;
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                v++;
            }else if(isalpha(c)){
                x++;
            }
        }
        if(v==0||x==0)return 0;
        return v/x;
    }
};