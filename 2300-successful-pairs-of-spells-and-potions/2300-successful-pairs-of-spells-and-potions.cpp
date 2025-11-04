#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());  
        int n = potions.size();
        vector<int> res;

        for (int spell : spells) {
            // Calculate minimum potion strength needed
            long long need = (success + spell - 1) / spell; 

            
            int idx = lower_bound(potions.begin(), potions.end(), need) - potions.begin();

            
            res.push_back(n - idx);
        }

        return res;
    }
};
