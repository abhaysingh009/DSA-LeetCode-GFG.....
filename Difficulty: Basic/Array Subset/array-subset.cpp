

class Solution {
public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        multiset<int> s1(a.begin(), a.end());  

        for (int x : b) {
            auto it = s1.find(x);
            if (it == s1.end()) return false; 
            s1.erase(it); 
        }
        return true;
    }
};
