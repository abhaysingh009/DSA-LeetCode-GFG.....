class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        string res="";
        for(int i=0;i<num;i++){
            int x=min(9,sum);
            res+=(char)('0'+x);
            sum-=x;
        }
        if(sum!=0){return "";}
        return res;
        
    }
};