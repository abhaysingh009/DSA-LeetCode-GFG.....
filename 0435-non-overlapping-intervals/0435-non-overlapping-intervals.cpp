class Solution {
public:
        static bool comp(vector<int>&p1,vector<int>&p2){
      return p1[1]<p2[1];
  }
    int eraseOverlapIntervals(vector<vector<int>>& arr) {

        sort(arr.begin(),arr.end(),comp);
        
        int fin=arr[0][1];
        int ans=1;
        for(auto it :arr){
            if(it[0]>=fin){
                ans++;
                fin=it[1];
            }
        }
        return arr.size()-ans;
    }
};