class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;
        // std::map automatically keeps keys sorted in ascending order
        map<int, int> similarItems;

        // Aggregate values and weights from the first item list
        for(const auto& item : items1) {
            similarItems[item[0]] += item[1];
        }
        
        // Aggregate values and weights from the second item list
        for(const auto& item : items2) {
            similarItems[item[0]] += item[1];
        }

        // Extract the sorted entries out of the map into our result matrix
        for(auto const& [value, weight] : similarItems) {
            ans.push_back({value, weight});
        }

        return ans;
    }
};