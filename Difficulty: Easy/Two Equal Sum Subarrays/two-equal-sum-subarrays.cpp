class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        long long total = 0;
        
        // Step 1: Calculate total sum
        for(int x : arr) {
            total += x;
        }
        
        // Step 2: If total is odd → not possible
        if(total % 2 != 0) {
            return false;
        }
        
        long long prefix = 0;
        
        // Step 3: Check prefix sum
        for(int x : arr) {
            prefix += x;
            
            if(prefix == total / 2) {
                return true;
            }
        }
        
        return false;
    }
};