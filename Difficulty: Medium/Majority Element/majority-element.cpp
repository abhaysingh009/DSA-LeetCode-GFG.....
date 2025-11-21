class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
     
        sort(arr.begin(),arr.end());
        int x=arr[n/2];
        int count =0;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                count++;
            }
        }
        if(count<=(n/2)){
            return -1;
        }
        return arr[n/2];
        
    }
};