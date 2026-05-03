class Solution {
  public:
  static int countset(int n){
      int count=0;
     while(n>0){
         int x=n%2;
         if(x==1)count++;
         n/=2;
     } 
     return count;
  }
  static bool comp(int a,int b){
      int s1=__builtin_popcount(a);
      int s2=__builtin_popcount(b);
      return s1>s2;
  }
    vector<int> sortBySetBitCount(vector<int>& arr) {
        stable_sort(arr.begin(),arr.end(),comp);
        return arr;
        
    }
};