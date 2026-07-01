class Solution {
  public:
    int maxProduct(vector<int>& arr) {
        int maxi=INT_MIN;
        int sc=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=maxi){
                sc=maxi;
                maxi=arr[i];
            }
            if(arr[i]<maxi and arr[i]>sc)sc=arr[i];
        }
        return sc*maxi;
        
    }
};