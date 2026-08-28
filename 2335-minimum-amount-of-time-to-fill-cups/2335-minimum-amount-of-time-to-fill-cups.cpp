class Solution {
public:
    int fillCups(vector<int>& amount) {
        int total = amount[0] + amount[1] + amount[2];

        int maxAmount = max({amount[0], amount[1], amount[2]});

        int twoCups = (total + 1) / 2;

        return max(maxAmount, twoCups);
    }
};