class Solution {
public:
    void solve(int index, vector<int>& candidates, int target, 
               vector<int>& current, vector<vector<int>>& result) {
        
        // If target becomes 0, we found a combination
        if(target == 0) {
            result.push_back(current);
            return;
        }
        
        // If target becomes negative or index out of range
        if(target < 0 || index == candidates.size())
            return;
        
        // --------- TAKE the current number ---------
        current.push_back(candidates[index]);
        solve(index, candidates, target - candidates[index], current, result);
        current.pop_back();   // Backtrack
        
        // --------- SKIP the current number ---------
        solve(index + 1, candidates, target, current, result);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        
        solve(0, candidates, target, current, result);
        
        return result;
    }
};