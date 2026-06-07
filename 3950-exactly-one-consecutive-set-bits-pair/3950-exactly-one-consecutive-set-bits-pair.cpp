class Solution {
public:
    bool consecutiveSetBits(int n) {
        int  c=0;
        bool p=0;
        while(n>0){
            int rem=n%2;
            if(rem==1){
                c++;
            }else{
                c=0;
            }
            if(c>2)return 0;
            if(p and c==2)return 0;
            if(c==2){
                p=true;
            }
            n/=2;
        }
        return p
        ;
    }
};