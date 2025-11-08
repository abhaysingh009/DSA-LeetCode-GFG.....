class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        if(a.size()!=b.size()){return false;}
       sort(a.begin(),a.end());//1112
       sort(b.begin(),b.end());//1222
       for(int i=0;i<a.size();i++){
           
       if(a[i]!=b[i]){
           return false;
       }
       }
       return true;
    }
};