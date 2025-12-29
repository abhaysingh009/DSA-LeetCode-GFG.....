class Solution {
public:
    vector<int> findPeaks(vector<int>& arr) {
        int i=1;
        int j=arr.size()-2;
    vector<int>res;
        while(i<=j){
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1] ){
                res.push_back(i);
            
            }
            i++;
        
        }
        return res;
    }
};