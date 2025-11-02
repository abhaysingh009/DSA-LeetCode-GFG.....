class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s==""){return true;}

        int sl=s.length();
        int tl=t.length();

        int i=0;
        int j=0;
        int count=0;                           //s="ahbgdc"    abc
        while(j<tl){                           //t="acb"      "ahbgdc"
            if(s[i]==t[j]){
                i++;
                j++;
                count++;
                if(count==(sl)){
                    return true;
                }
            }
            else{
                j++;
            }
        }
        return false;

        
    }
};