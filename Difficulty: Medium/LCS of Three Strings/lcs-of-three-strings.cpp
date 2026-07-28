class Solution {
  public:
   int findLCSOf3(string& s1, string& s2, string& s3, int n1, int n2, int n3,
               vector<vector<vector<int>>> &memo) {
    if (n1 == 0 || n2 == 0 || n3 == 0)
        return 0;

    if (memo[n1][n2][n3] != -1)
        return memo[n1][n2][n3];
    if (s1[n1 - 1] == s2[n2 - 1] && s2[n2 - 1] == s3[n3 - 1])
        return memo[n1][n2][n3] = 1 + findLCSOf3(s1, s2,
								s3, n1 - 1, n2 - 1, n3 - 1, memo);
    return memo[n1][n2][n3] = max({findLCSOf3(s1, s2, s3, n1 - 1, n2, n3, memo),
                                  findLCSOf3(s1, s2, s3, n1, n2 - 1, n3, memo),
                                  findLCSOf3(s1, s2, s3, n1, n2, n3 - 1, memo)});
}

int lcsOf3(string& s1, string& s2, string& s3) {
    int n1 = s1.size();
    int n2 = s2.size();
    int n3 = s3.size();
    vector<vector<vector<int>>> memo = vector<vector<vector<int>>>(n1 + 1, 
    vector<vector<int>>(n2 + 1, vector<int>(n3 + 1, -1)));
    int res = findLCSOf3(s1, s2, s3, n1, n2, n3, memo);
    return res;
}
};
