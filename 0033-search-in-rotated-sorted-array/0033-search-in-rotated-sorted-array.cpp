class Solution {
public:
    int search(vector<int>& arr, int t) {
        int n=arr.size();
        int f=0;
        int l=n-1;
        while(f<=l){
            int mid=(l+f)/2;
            if(arr[mid]==t){
                return mid;
            }
            else if(arr[f]<=arr[mid]){
                if(arr[mid]>t and arr[f]<=t){
                    l=mid-1;
                }
                else{
                    f=mid+1;
                }
            }
            else if(arr[mid]<=arr[l]){
                if(arr[mid]<=t and arr[l]>=t){
                    f=mid+1;
                }
                else{
                    l=mid-1;
                }
            }
        }
        return -1;
        
    }
};