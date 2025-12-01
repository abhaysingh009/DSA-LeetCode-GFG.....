
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // vector<int> arr2(arr.begin(),arr.end());
        // reverse(arr2.begin(),arr2.end());
        // for(int i=0;i<arr.size();i++){
        //     if (arr[i]!=arr2[i]){
        //         return false;
        //     }
        // }
        // return true;
        int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            return false;
        }
    }
    return true;
        
    }
};
