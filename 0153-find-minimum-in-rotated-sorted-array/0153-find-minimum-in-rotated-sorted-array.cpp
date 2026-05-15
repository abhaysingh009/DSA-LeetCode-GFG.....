class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int f=0;
        int l=n-1;
        int minE=INT_MAX;

        while(f<=l){
            int mid=(f+l)/2;
            if(arr[f]<=arr[mid]){
                minE=min(minE,arr[f]);
                f=mid+1;

            }
            else if(arr[mid]<=arr[l]){
                minE=min(minE,arr[mid]);
                l=mid-1;
                }
        }
        
        return minE;

    }
};