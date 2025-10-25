class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int count =0;
        int a=1;
        int b=7;
        while(count<=n){
       
           for(int i=a;i<=b;i++){
            ++count;
            if(count<=n){
            sum+=i;
            }
           }
            a++;
            b++;
        }
           return sum;
        
    }
};