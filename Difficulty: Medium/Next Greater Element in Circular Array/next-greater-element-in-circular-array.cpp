class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>res(n,-1);
     for(int i=0;i<2*n;i++){
         i%n;
         while(!st.empty() and arr[st.top()]<arr[i%n]){
             if(res[st.top()]==-1){
             res[st.top()]=arr[i%n];
             st.pop();
             }
         }
         if(i<n){
         st.push(i);
         }
     }
     return res;
    }
};
