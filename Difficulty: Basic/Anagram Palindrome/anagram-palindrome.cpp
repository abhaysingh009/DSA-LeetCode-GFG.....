class Solution {
  public:
    bool canFormPalindrome(string &s) {

        unordered_map<char, int> freq;
    
        
        for(char c : s) {
            freq[c]++;
            }
    
        int oddCount = 0;
    
        // Count odd frequencies
        for(auto it : freq) {
            if(it.second % 2 != 0) {
                oddCount++;
            }
        }
        if(oddCount <= 1)
            return 1;
        else
        return 0;
           
    
        
    }
};