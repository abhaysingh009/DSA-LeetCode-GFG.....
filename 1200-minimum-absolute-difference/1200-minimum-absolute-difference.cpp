class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> res;
        int temp=INT_MAX;
        //-20 11 26 27 40 
        for(int i=0;i<arr.size()-1;i++){
            int diff=abs(arr[i]-arr[i+1]);
            if(temp==diff){
                res.push_back({arr[i],arr[i+1]});
            }
            else if(diff<temp){
                res.clear();
                res.push_back({arr[i],arr[i+1]});
                temp=diff;
            }
        }
    return res;
    }
};