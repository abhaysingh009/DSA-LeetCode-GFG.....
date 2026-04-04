// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &heights) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int g=heights[0];
        int ans=1;
        for (int i=1;i<heights.size();i++){
            if(heights[i]>g){
                ans++;
                g=heights[i];
            }
        }
        return ans;
    }
};