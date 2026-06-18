class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int aliceTotal = 0;
        int bobTotal = 0;
        for(int i : aliceSizes){
            aliceTotal += i; 
        }
        for(int i : bobSizes){
            bobTotal += i; 
        }

        int diff = (bobTotal - aliceTotal) / 2;

        unordered_set<int> bob(bobSizes.begin(),bobSizes.end());

        for(int x : aliceSizes){
            int y = x + diff;

            if(bob.count(y)){
                return {x, y};
            }
        }
        return {};
    }
};