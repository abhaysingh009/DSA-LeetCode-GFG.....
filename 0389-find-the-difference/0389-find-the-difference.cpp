class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n1=s.length();
        int n2=t.length();

        int i=0;
        int j=0;
        while(i<n1 and j<n1){
            if(s[i]==t[i]){
                i++;
                j++;
            }
            else{
                return t[i];
            }
        }
        return t[j];


    }
};