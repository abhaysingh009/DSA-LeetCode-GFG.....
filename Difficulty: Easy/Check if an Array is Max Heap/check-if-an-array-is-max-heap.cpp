class Solution {
  public:
    bool isMaxHeap(vector<int> &arr) {
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            int left=2*i+1;
            int right=2*i+2;
            if(left<n and arr[i]<arr[left]){
                return 0;
            }
            if(right<n and arr[i]<arr[right]){
                return 0;
            }
        }
        return n;
        
    }
};
