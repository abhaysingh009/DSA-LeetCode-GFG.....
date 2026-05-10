
class Solution {
  public:
    void zigZag(vector<int> &arr) {
       sort(arr.begin(),arr.end());
       int n=arr.size();
       for(int i=1;i<n-1;i+=2){
           swap(arr[i],arr[i+1]);
       }
        
    }
};
