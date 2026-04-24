class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        int ans=1;
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
            
            if(arr[i]>=max){
                ans++;
                max=arr[i];
            }
        }
        return ans;
        
    }
};