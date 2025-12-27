class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
       vector<int>v;
       while(!s.empty()){
           v.push_back(s.top());s.pop();
       }
       int n=v.size();
       for(int i=n-1;i>=0;i--){
           if(i!=n/2){
               s.push(v[i]);
           }
       }
    }
};