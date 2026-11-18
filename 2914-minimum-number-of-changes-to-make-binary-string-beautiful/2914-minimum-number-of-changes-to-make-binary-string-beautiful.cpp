class Solution {
public:
    int minChanges(string s) {
        int n=s.size();
        n/=2;
        int i=0;
        int count=0;
        while(n--){
            if(s[i]!=s[i+1])count++;
            i+=2;
        }
        return count;
    }
};
