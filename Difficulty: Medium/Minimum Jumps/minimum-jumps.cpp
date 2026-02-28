class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        // If only one element, no jump needed
        if(n == 1)
            return 0;
        
        // If first element is 0, we cannot move
        if(arr[0] == 0)
            return -1;
        
        int maxReach = arr[0];
        int steps = arr[0];
        int jumps = 1;
        
        for(int i = 1; i < n; i++) {
            
            // If we reached last index
            if(i == n - 1)
                return jumps;
            
            // Update max reachable index
            maxReach = max(maxReach, i + arr[i]);
            
            steps--;
            
            // If no more steps left
            if(steps == 0) {
                jumps++;
                
                // If current index is beyond maxReach
                if(i >= maxReach)
                    return -1;
                
                // Reset steps
                steps = maxReach - i;
            }
        }
        
        return -1;
    }
};