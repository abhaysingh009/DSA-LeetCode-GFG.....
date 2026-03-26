// User function Template for C++

class Solution {
  public:
    int inSequence(int a, int b, int c) {
        while(a<b){
            a+=c;
        }
        return a==b?1:0;
        
    }
};