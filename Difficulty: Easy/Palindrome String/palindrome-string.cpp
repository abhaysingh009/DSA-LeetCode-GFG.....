class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string temp=s;
        int n=s.length();
        for(int i=0;i<n/2;i++){
            swap(s[i],s[n-1-i]);
            
        }
        if(s==temp){
            return true;
        }
        return false;
    }
};