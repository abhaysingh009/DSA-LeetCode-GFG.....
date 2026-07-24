class Solution {
public:
    long long sumOfDivisors(long long n) {
        long long ans = 0;

        for(long long l = 1; l <= n; ) {
            long long q = n / l;
            long long r = n / q;

            long long sum = (l + r) * (r - l + 1) / 2;

            ans += q * sum;

            l = r + 1;
        }

        return ans;
    }
};