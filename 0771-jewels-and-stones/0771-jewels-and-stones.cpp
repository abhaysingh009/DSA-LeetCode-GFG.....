class Solution {
public:
    int numJewelsInStones(string jwels, string stones) {
        // vector<int>res(26,0);
        int res=0;
        set<char>st(jwels.begin(),jwels.end());
        for(char c:stones){
            if(st.count(c)){
                res++;
            }
        }
        return res;

        
    }
};