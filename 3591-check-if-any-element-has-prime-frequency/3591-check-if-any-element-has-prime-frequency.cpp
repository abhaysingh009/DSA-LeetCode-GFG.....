class Solution {
public:
bool isPrime(int n) {
    if (n <= 1) return false;  
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;   
    }
    
    return true;              
}
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto it:freq){
            if(it.second==2 or it.second%2!=0){
                if(isPrime(it.second)){
                    return 1;
                }
            }
        }
        return 0;
        
    }
};