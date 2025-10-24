class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        int st = 0, end = n - 1;
        int index1 = -1, index2 = -1;

        // Find first occurrence
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] == target) {
                index1 = mid;
                end = mid - 1;
            }
            else if (arr[mid] < target) st = mid + 1;
            else end = mid - 1;
        }

        // Find last occurrence
        st = 0;
        end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] == target) {
                index2 = mid;
                st = mid + 1;
            }
            else if (arr[mid] < target) st = mid + 1;
            else end = mid - 1;
        }

        if (index1 == -1 || index2 == -1) {return 0;} 
      
        int count =0;
        for(int i=index1;i<=index2;i++){
            count++;
        }
        return count;
        
    }
};
