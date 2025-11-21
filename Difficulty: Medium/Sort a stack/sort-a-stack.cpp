class Solution {
  public:
    void sortStack(stack<int> &st) {
       vector<int>v;
       
       while(!(st.empty())){
           int x=st.top();
           v.push_back(x);
           
           st.pop();
       }
       sort(v.begin(),v.end());
       //2 3 11 32 41
       
       for(int e:v){
           st.push(e);
           
       }
        
    }
};
