// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>res;
        //[-10,-9,-6,-5,-1,0,1,4,6,8]
        int left=0;
        int right=arr.size()-1;
        while(left<right){
            int temp= arr[left]+arr[right];
            if(temp==0){
                 res.push_back({arr[left], arr[right]});
                left++;
                right--;
                
                
            }
            else if(temp<0){
                left++;
                
                
            }
            else{
                right--;
            }
        
                while (left < right && arr[left] == arr[left - 1]) left++;
                while (left < right && arr[right] == arr[right + 1]) right--;
        }
        return res;
        
    }
};