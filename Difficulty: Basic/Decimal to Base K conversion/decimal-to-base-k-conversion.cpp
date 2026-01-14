class Solution {
  public:
    long long changeBase(int N, int K) {
        if (N == 0) return 0;

        long long ans = 0;
        long long place = 1;

        while (N > 0) {
            int rem = N % K;
            ans += rem * place;
            place *= 10;
            N /= K;
        }

        return ans;
    }
};
