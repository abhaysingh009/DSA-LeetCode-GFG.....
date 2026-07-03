class Solution {
public:
    long long reverseNum(long long n) {
        long long rev = 0;
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return rev;
    }

    bool isPalindrome(long long n) {
        return n == reverseNum(n);
    }

    long long isSumPalindrome(long long n) {

        // Check if already palindrome
        if (isPalindrome(n))
            return n;

        for (int i = 0; i < 5; i++) {
            n = n + reverseNum(n);

            if (isPalindrome(n))
                return n;
        }

        return -1;
    }
};