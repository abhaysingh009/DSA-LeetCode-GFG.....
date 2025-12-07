class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2==0)low+=1;
        if(high%2==0)high-=1;
        int count=0;
        for(int i=low;i<=high;i+=2){
            count++;
        }
        return count;


        
    }
};