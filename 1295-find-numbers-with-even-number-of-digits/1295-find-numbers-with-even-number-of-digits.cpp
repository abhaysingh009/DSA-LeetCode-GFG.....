class Solution {
public:
    int countDigit(int n){
        int count =0;
        while(n!=0){
            count++;
            n/=10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int e:nums){
            if(countDigit(e)%2==0){
                count++;
            }
        }
        return count;


        
    }
};