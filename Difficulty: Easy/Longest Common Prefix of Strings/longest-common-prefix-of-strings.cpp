// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
       sort(arr.begin(),arr.end());
       string s1=arr[0];
       string s2=arr[arr.size()-1];
       string ans="";
       for(int i=0;i<s1.size();i++){
           if(s1[i]==s2[i]){
               ans+=s1[i];
           }
           else{
               break;
           }
       }
       return ans;
        
    }
};