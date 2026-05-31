class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int maximum=100000;
        long long mass=m;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>mass)return 0;
            else mass+=arr[i];
        }
        return 1;

    }
};