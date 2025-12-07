// User function Template for C++

class Solution {
  public:
    int minX(int a, int b, int c, long int k) {
        int x=0;
        while(true){
        int res=a*pow(x,2)+b*x+c;
        if(res>=k){
            return x;
        }
        x++;
        }
        return -1;
    }
};