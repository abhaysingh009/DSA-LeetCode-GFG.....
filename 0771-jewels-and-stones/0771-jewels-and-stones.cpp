class Solution {
public:
    int numJewelsInStones(string jwels, string stones) {
        
        int res=0;
        for(char c:stones){
            if(jwels.contains(c)){
                res++;
            }
        }
        return res;

        
    }
};