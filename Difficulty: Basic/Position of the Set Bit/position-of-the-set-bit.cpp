class Solution {
  public:
    int findPosition(int n) {

        int pos=-1;
        int c2=0;
        int c=0;
        while(n>0){
            c2++;
            int rem=n%2;
            if(rem==1){
                pos=c2;
                c++;
                if(c>1)return -1;
            }
            n/=2;
            
        }
        return pos;
    }
};