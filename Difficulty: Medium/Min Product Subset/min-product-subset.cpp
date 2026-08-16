class Solution {
  public:
      int minProd(vector<int>& arr) {

          long long prod = 1;
          int neg = 0;
          int zero = 0;
          int maxNeg = INT_MIN;
          int minPos = INT_MAX;

          for (int x : arr) {

              if (x == 0) {
                  zero++;
                  continue;
              }

              prod *= x;

              if (x < 0) {
                  neg++;
                  maxNeg = max(maxNeg, x);
              }
              else {
                  minPos = min(minPos, x);
              }
          }

          // all elements are zero
          if (zero == arr.size())
              return 0;

          // no negative numbers
          if (neg == 0) {
              if (zero > 0)
                  return 0;
              return minPos;
          }

          // even number of negatives
          if (neg % 2 == 0)
              prod /= maxNeg;

          return prod;
      }
  };