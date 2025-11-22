class Solution {
  public:
    void reverseStack(stack<int> &st) {
        vector<int>v;
        
        while(!(st.empty())){
            v.push_back(st.top());
            st.pop();
        }
        // v=4 3 2 1
        for(int i=0; i<v.size();i++){
            st.push(v[i]);
            
        }
        
    }
};