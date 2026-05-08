class Solution {
  public:
    int maxZeros(vector<vector<int>> arr) {
       int n=arr.size();
       int idx=-1;
       int prev=0;
       for (int i = 0; i<n;i++){
           int c=0;
           for (int j=0;j<n;j++){
               if(arr[j][i]==0){
                   c++;
                   
               }
           }
           if(c>prev){
               prev=c;
               idx=i;
           }
       }
        return idx;
    }
};