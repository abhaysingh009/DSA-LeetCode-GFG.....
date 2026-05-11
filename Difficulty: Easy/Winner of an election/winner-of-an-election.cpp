class Solution {
  public:

    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n) {
        // Your code here
        
        // Return the string containing the name and an integer
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        string name="";
        int votes=-1;
        for(auto it: mp){
            if(it.second>votes){
                name=it.first;
                votes=it.second;
            }else if(it.second==votes){
                name=(it.first<name)?it.first:name;
            }
        }
        return {name, to_string(votes)};
    }
};