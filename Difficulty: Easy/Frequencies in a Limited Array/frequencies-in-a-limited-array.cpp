class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        unordered_map<int,int>freq;
        vector<int>res;
        int n=arr.size();
        
        for(int e:arr){
            freq[e]++;
        }
        for(int i=1;i<=n;i++){
            res.push_back(freq[i]);
        }
        return res;
        
        
    }
};
