class Solution {
public:
    bool isHappy(int n) {
        int x=n;
        int sum=0;
       

        while(1){
            while(n>0){
            int rem=n%10;
            sum+=(1LL*rem*rem);
            n/=10;
            }
            if(sum==4)return 0;
            if(sum==1)return 1;
            n=sum;
            sum=0;

           
        }
        return 1;
    }
};