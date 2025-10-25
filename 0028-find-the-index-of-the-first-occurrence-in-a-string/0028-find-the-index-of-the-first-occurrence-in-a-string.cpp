class Solution {
public:
    int strStr(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        int i=0;
        int j=0;
        while(i<n1){
            if(s1[i]==s2[j]){
                i++;
                j++;
                if(j==n2){
                    return i-j;
                }
            }
            else {
                i=i-j+1;
                j=0;
            }
        }
        return -1;

        
    }
};