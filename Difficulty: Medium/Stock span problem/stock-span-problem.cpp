class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n=arr.size();
       stack<int>st;
       vector<int>res(n);
       
       for(int i=n-1;i>=0;i--){
           
           while(!st.empty() and arr[i]>arr[st.top()]){
               res[st.top()]=st.top()-i;
               st.pop();
               
           }
           st.push(i);
           
       }
       while(!st.empty()){
           res[st.top()]=st.top()+1;
           st.pop();
       }
       return res;
        
    }
};