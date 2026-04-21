class Solution {
  public:
  bool check(int n){
      set<int>st{1,2,3};
      while(n>0){
          int rem=n%10;
          if(!st.count(rem)){
              return 0;
          }
          n/=10;
      }
      return 1;
  }
    vector<int> filterByDigits(vector<int>& arr) {
        vector<int>ans;
        for(int i:arr){
            if(i<10){
                if(i==1 or i==2 or i==3){
                ans.push_back(i);
                }
            }else{
                if(check(i)){
                    ans.push_back(i);
                }
            }
        }
        return ans;
        
    }
};
