// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int> st;
        
      
        for(int i=0;i<arr.size();i++){
            //stack is empty
            
            if(st.empty()){
                st.push(arr[i]);
            }
            
            //top is non negative 
            
            else if(arr[i]>=0){
                
                if(st.top()>=0){
                    st.push(arr[i]);
                }
                else{
                    st.pop();
                }
                
            }
            // top is negative
            else{
                if(st.top()<0){
                    st.push(arr[i]);
                }
                else{
                    st.pop();
                }
            }
        }
        int i=st.size()-1;
        vector<int> res(i+1);
        
        
        while(!(st.empty())){
            
            res[i--]=st.top();st.pop();
            
        }
        return res;
    }
};