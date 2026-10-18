class Solution {
  public:
  static bool comp(pair<int,int>&a, pair<int,int>&b){
      if(a.second==b.second)return a.first>b.first;
      else return a.second>b.second;
  }
    vector<int> topKFrequent(vector<int> &arr, int k) {
        // Code here
        map<int,int>freq;
        for(int i:arr){
            freq[i]++;
        }
    
        vector< pair<int,int> >ans(freq.begin(),freq.end());
        
        sort(ans.begin(), ans.end(),comp);
        
        vector<int>temp;
        for(auto it:ans){
            if(k==0)break;
            temp.push_back(it.first);
            k--;
        }
        return temp;
        
    }
};
