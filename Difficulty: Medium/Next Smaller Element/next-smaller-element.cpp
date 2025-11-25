class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n = arr.size();
    stack <int>st;
    vector<int>res(n,-1);
    for(int i=0;i<n;i++){
        while(!st.empty() and arr[st.top()]>arr[i]){
            res[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
    }
};