class Solution {
  public:
  vector<char>add(char a,char b,char carry){
      char ans='0';
       if(carry=='1'){
           if(a=='0' and b=='0'){
               ans='1';carry='0';
           }
           else if(a=='1' and b=='1'){
               ans='1';carry='1';
           }else{
               ans='0';
               carry='1';
           }
               
       }else{
           if(a=='1' and b=='1'){
               ans='0';carry='1';
           }else if(a=='0' and b=='0'){
               ans='0';carry='0';
           }else{
               ans='1';
               carry='0';
           }
       }
       return {ans,carry};
      
      
  }
    string addBinary(string& s1, string& s2) {
        //handle  0 output case
        s1.erase(0,s1.find_first_not_of('0'));
        s2.erase(0,s2.find_first_not_of('0'));
        if(s1.empty() and s2.empty())return "0";
        if(s1.empty() or s2.empty())return max(s1,s2);
        
        
        int n=s1.size();
        int m=s2.size();
        string ans="";
        int i=n-1,j=m-1;
        int carry='0';
        while(i>=0 and j>=0){
            vector<char>arr=add(s1[i],s2[j],carry);
            i--;j--;
            ans.push_back(arr[0]);
            carry=arr[1];
            
        }
        while(i>=0){
            vector<char>arr=add(s1[i],'0',carry);
             ans.push_back(arr[0]);
             carry=arr[1];
             i--;
            
        }
        while(j>=0){
            vector<char>arr=add(s2[j],'0',carry);
             ans.push_back(arr[0]);
             carry=arr[1];
             j--;
            
        }
        if(carry=='1')ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// "1101", s2 = "111"
// = "00100", s2 = "010"






















