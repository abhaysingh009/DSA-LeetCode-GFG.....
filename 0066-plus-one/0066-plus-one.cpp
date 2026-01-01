class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int x=digits[n-1]+1;
        if(digits[n-1]<9){
            digits[n-1]=x;
            return digits;
        }
        digits[n-1]=0;
        for(int i=n-2;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;

        
    }
};