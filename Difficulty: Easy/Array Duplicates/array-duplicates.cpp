class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
         vector<int> duplicates;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        int x = abs(arr[i]);   // element ki actual value
        int idx = x - 1;       // uska index
        
        if (arr[idx] > 0) {
            // pehli baar aa raha hai -> mark visited
            arr[idx] = -arr[idx];
        } else {
            // already negative hai -> duplicate mila
            duplicates.push_back(x);
        }
    }
    
    return duplicates;
    }
};