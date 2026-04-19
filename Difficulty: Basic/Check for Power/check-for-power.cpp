class Solution {
  public:
    bool isPower(int x, int y) {
       if(x==1)return 0;
       
       while(y%x==0){
           y/=x;
       }
        return y==1;        
    }
};