class Solution {
public:
bool helper(int n,vector<int>freq){
        while(n>0){
            int rem=n%10;
            if(freq[rem]==0)return 0;
            else freq[rem]--;
            n/=10;
        }
        return 1;
}
    vector<int> findEvenNumbers(vector<int>& digits) {
       vector<int>freq(10,0);
       for(int i:digits)freq[i]++;
        vector<int>ans;
        for(int i=100;i<1000;i+=2){
            if(helper(i,freq))ans.push_back(i);
        }
        return ans;
    }
};