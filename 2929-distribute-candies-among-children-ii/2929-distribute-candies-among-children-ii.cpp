class Solution {
public:
long long ncr(long long n, long long r) {
    if (r < 0 || r > n) return 0;

    r = min(r, n - r);

    long long ans = 1;

    for (long long i = 1; i <= r; i++) {
        ans = ans * (n - i + 1) / i;
    }

    return ans;
}
    long long distributeCandies(int n, int limit) {
        if(n>3*limit)return 0;
        return ncr(n+2,2)-3*ncr(n-limit+1,2)+3*ncr(n-2*limit,2);
    }
};