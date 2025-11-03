class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());

        vector<int>v1;
        vector<int>v2;
        //in nums 1 which are not present in num2
        for(int e:s1){
            if(!(s2.count(e))){
                v1.push_back(e);
            }
        }
        //in nums 2 which are not present in num2
          for(int e:s2){
            if(!(s1.count(e))){
                v2.push_back(e);
            }
        }
        vector<vector<int>>res;
        res.push_back(v1);
        res.push_back(v2);
        return res;


// Input: nums1 = [1,2,3,3], nums2 = [1,1,2,2]
// Output: [[3],[]]
        
    }
};