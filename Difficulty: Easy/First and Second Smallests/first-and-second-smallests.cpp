class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mini = INT_MAX;      
        int secmini = INT_MAX;

        // First loop to find the minimum element in the array
        for(int i = 0; i < n; i++) {
            mini = min(mini, arr[i]);
        }

        // Second loop to find the second minimum element 
        for(int i = 0; i < n; i++) {
            if(arr[i] != mini) {
                secmini = min(secmini, arr[i]);
            }
        }

        // If second minimum was not updated, it means all elements are equal
        if(secmini == INT_MAX) {
            return {-1};  
        }

        return {mini, secmini};
        
    }
};