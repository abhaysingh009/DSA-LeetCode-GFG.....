class Solution {
  public:
    string removeDuplicates(string& s) {
       string ans="";
       for(auto c:s){
           if(ans.back()!=c){
               ans.push_back(c);
           }
       }
       return ans;
    }
};