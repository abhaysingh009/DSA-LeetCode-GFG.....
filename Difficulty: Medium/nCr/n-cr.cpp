class Solution {
public:
    int nCr(int n, int r) {
        
        if(r > n)
            return 0;
        
        // choosing smaller side
        r = min(r, n-r);
        
        long long ans = 1;
        
        for(int i = 0; i < r; i++) {
            ans *= (n - i);
            ans /= (i + 1);
        }
        
        return ans;
    }
};