class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        vector<int>temp(1e3+1,0);
        for(int i:arr1){
            temp[i]++;
        }
        vector<int>ans;
        for(int i:arr2){
            while(temp[i]){
                ans.push_back(i);
                temp[i]--;
            }
        }
        for(int i=0;i<temp.size();i++){
            while(temp[i]){
                ans.push_back(i);
                temp[i]--;
            }
        }
        return ans;        
    }
};