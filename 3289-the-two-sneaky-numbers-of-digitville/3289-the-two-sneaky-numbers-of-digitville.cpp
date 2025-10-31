class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& arr) {
        set<int>s1;
        vector<int> res;
        for (int i=0;i<arr.size();i++){
            if(s1.count(arr[i])){
                res.push_back(arr[i]);

            }
            else{
                s1.insert(arr[i]);
            }
        }
        return res;
    }
};