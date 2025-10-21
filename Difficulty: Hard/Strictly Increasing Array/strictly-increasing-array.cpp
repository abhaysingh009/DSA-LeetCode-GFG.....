

class Solution {
  public:

    int min_operations(vector<int>& nums) {
        int n = nums.size();
        
 vector<int> tails;

        for (int i = 0; i < n; ++i) {
    
            int transformed_val = nums[i] - i;
            
            auto it = std::upper_bound(tails.begin(), tails.end(), transformed_val);
            
            if (it == tails.end()) {
                
                tails.push_back(transformed_val);
            } else {
            
                *it = transformed_val;
            }
        }
       
int k = tails.size();
        
        return n - k;
    }
};