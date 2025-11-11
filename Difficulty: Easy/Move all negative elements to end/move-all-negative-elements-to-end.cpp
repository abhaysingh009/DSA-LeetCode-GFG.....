class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp;
        temp.reserve(n); // reserve space to avoid reallocations

        // Step 1: Copy all positive elements
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0)
                temp.push_back(arr[i]);
        }

        // Step 2: Copy all negative elements
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0)
                temp.push_back(arr[i]);
        }

        // Step 3: Copy back to original array
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
};
