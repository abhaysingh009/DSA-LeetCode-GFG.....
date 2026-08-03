class Solution {
  public:
    bool isDivBy8(string &s) {
       
        int n = s.size();

        int num = 0;

        if(n < 3) {
            for(char c : s) {
                num = num * 10 + (c - '0');
            }
            return num % 8 == 0;
        }

        // last three digits
        for(int i = n - 3; i < n; i++) {
            num = num * 10 + (s[i] - '0');
        }

        return num % 8 == 0;
    }
};