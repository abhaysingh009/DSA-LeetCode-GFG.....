class Solution {
public:
int digitSum(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
    int largestInteger(int n, int s) {
        if(s==0)return 0;
        int x=n;
        int smallest=1;
        while(--n){
            smallest*=10;
        }
        int largest=9;
        n=x;
        while(--n){
            largest=largest*10+9;
        }
        int ans=-1;
        for(int i=smallest;i<=largest;i++){
            if(digitSum(i)==s){
                ans=i;
            }
        }
        return ans;
        
    }
};