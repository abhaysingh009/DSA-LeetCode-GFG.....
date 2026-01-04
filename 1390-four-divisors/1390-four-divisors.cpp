class Solution {
public:
int fun(int n){
    set<int>st;
    int sum=0;
    for(int i=1;i*i<=n;i++){//21
        if(n%i==0){
            int x=n/i;
            if(!st.count(i) and !st.count(x)){
                sum+=i+x;
            }
            st.insert(i);
            st.insert(x);
        }
    }
    if(st.size()==4)return sum;
    return 0;

}
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int e:nums){
            sum+=fun(e);
        }
        return sum;
        
    }
};