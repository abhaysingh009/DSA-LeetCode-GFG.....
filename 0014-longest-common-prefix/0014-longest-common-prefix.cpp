class Solution {
public:
    string longestCommonPrefix(vector<string>& s1) {
         sort(s1.begin(),s1.end());
    string s2=s1[0];
    string s3=s1[s1.size()-1];
    string res="";
    for(int i=0;i<s2.size();i++){
       if(s2[i]==s3[i]){
        res+=s2[i];
       }
       else{
        break;
       }
    }
    return res;
        
    }
};