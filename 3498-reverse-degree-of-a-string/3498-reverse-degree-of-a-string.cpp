class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int i=1;
        for(char c:s){
            ans=ans+(('z'-c+1)*i++);
        }
        return ans;
    }
};