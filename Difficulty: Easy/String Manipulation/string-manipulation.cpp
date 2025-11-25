// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        stack<string>st;
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(st.empty()){
                st.push(arr[i]);
            }
            else{
                if(st.top()!=arr[i]){
                    st.push(arr[i]);
                }
                else{
                    st.pop();
                    count+=2;
                }
                
            }
        }
        return arr.size()-count;
    }
};