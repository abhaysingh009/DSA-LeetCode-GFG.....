// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        // 161
        if((a>b and a<c)||(a<b and a>c)){
           return  a;
        }
        if ((b>a and b<c)||(b<a and b>c)){
            return b;
        }
        return c;
        
    }
};