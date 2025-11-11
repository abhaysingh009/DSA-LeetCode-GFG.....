class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int res=-1;
        for(int j=0;j<arr.size();j++){
            int x=arr[j];
            int count =0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==arr[j]){
                count++;

            }

        }
        if(count==x){
            res= x;
        }
        }
        return res;
    }
};