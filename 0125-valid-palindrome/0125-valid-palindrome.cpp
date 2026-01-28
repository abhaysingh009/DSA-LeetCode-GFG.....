class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' and s[i]<='z'||s[i]>='0' and s[i]<='9'){
                temp+=s[i];
            }
            else if(s[i]>='A' and s[i]<='Z'){
                temp+=tolower(s[i]);
            }
        }
        string temp1=temp;
        reverse(temp1.begin(),temp1.end());
        return temp1==temp; 
    }
};