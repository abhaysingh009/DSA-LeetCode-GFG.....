class Solution {
public:
    int calculateScore(int a, int b) {
        int x,y;
        x=__builtin_popcount(a);
        y=__builtin_popcount(b);
       return x>=y?x*y:y/x;
    }
};