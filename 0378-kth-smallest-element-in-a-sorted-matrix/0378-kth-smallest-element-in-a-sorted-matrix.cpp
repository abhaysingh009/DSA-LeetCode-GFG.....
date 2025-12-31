class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        vector<int>temp;
        for(int i=0;i<mat.size();i++){
            for(int j=0; j<mat[0].size();j++){
                temp.push_back(mat[i][j]);
            }
        }
        sort(temp.begin(),temp.end());
        return temp[k-1];
        
    }
};