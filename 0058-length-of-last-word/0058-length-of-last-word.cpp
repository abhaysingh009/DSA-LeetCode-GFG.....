class Solution {
public:
    int lengthOfLastWord(string s) {
        while (!s.empty() && s.back() == ' ') {
        s.pop_back();
        }
        int n=s.size();
        int idx=-1;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                idx=i;
            }
        }
    idx+=1;
    return n-idx;
        
    }
};