

class Solution {
  public:
    int longest(vector<int>& arr) {
        // Write your code here
        int g=arr[0];
        int ans=1;
        for(int i =1;i<arr.size();i++){
            if(arr[i]>=g){
                ans++;
                g=arr[i];
            }
        }
        return ans;
    }
};