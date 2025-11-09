// User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m) {
        // code here
        if(n==m){
            return "equal";
        }
        if(m>n){
            return "lesser";
        }
        return "greater";
    }
};