// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        
        int greater=INT_MAX;
        int lower=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=x and arr[i]<greater){
                greater=arr[i];
            }
            if(arr[i]<=x and arr[i]>lower){
                lower=arr[i];
            }
        }
        if(greater==INT_MAX)greater=-1;
        if(lower==INT_MIN)lower=-1;
        return {lower,greater};
        
    }
};