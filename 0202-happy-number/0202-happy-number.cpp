class Solution {
public:
    bool isHappy(int n) {
        int x=n;
        int sum=0;
        set<int>st;

        while(1){
            while(n>0){
            int rem=n%10;
            sum+=(1LL*rem*rem);
            n/=10;
            }
            if(st.count(sum))return 0;
            st.insert(sum);
            if(sum==1)return 1;
            n=sum;
            sum=0;

           
        }
        return 1;
    }
};