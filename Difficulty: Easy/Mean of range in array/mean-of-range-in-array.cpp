class Solution {
  public:
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries) {
     int n=arr.size();
     vector<int>pref(n);
     pref[0]=arr[0];
     int sum=arr[0];
     for(int i=1;i<n;i++){
         sum+=arr[i];
         pref[i]=sum;
     }
     
     vector<int>ans;
    for(int i=0;i<queries.size();i++){
        int l=queries[i][0];
        int r=queries[i][1];
        int d=r-l+1;
        l-=1;
        if(l<0){
            l=0;
        }else {
            l=pref[l];
        }
        int x=pref[r]-l;
        x/=d;
        ans.push_back(x);
    }
    return ans;
        
    }
};