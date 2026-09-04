class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        if(arr.size()==1)return (0<=k)?0:-1;
        for(int i=0;i<arr.size();i++){
            int first=*max_element(arr.begin(),arr.begin()+i);
            int second=*min_element(arr.begin()+i,arr.end());
            if((first-second)<=k)return i;
        }
        return -1;
        
    }
};