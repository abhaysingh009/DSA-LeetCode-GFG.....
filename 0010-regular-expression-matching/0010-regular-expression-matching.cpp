class Solution {
public:
    bool helper(string &s, string &p, int i, int j) {
        if(j<0)return i<0;

        if(i<0){
            if(p[j]=='*')return helper(s,p,i,j-2);
            return 0;
        }

        if(p[j]=='*'){
            return helper(s,p,i,j-2) ||
                   ((p[j-1]==s[i] or p[j-1]=='.') && helper(s,p,i-1,j));
        }

        if(s[i]==p[j] or p[j]=='.')
            return helper(s,p,i-1,j-1);

        return 0;
    }

    bool isMatch(string s, string p) {
        int m=s.size();
        int n=p.size();
        return helper(s,p,m-1,n-1);
    }
};