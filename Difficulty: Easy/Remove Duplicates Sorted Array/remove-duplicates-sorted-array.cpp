class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
       set<int>s1(arr.begin(),arr.end());
       vector<int>temp(s1.begin(),s1.end());
       return temp;
        
    }
};