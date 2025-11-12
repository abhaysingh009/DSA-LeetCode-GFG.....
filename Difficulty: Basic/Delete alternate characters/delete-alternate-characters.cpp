// User function Template for C++
class Solution {
  public:
    string delAlternate(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                res+=s[i];
            }
        }
        return res;
    }
};