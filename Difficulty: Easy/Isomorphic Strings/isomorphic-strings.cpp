class Solution {
public:
    bool areIsomorphic(string s1, string s2) {
        int map1[26] = {0};
        int map2[26] = {0};

        for (int i = 0; i < s1.size(); i++) {
            int a = s1[i] - 'a';
            int b = s2[i] - 'a';

            if (map1[a] == 0 && map2[b] == 0) {
                map1[a] = b + 1;
                map2[b] = a + 1;
            }
            else {
                if (map1[a] != b + 1 || map2[b] != a + 1)
                    return false;
            }
        }
        return true;
    }
};
