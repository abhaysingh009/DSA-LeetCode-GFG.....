// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int sum=0;
        for(int e:arr){
            sum+=e;
        }
        return sum;
    }
};