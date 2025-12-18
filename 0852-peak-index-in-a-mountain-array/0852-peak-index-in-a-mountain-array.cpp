class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int first=1;
        int last=arr.size()-2;
        while(first<=last){
            int mid=first+(last-first)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid-1]){
                last=mid-1;
            }
            else{
                first=mid+1;
            }
        }
        return -1;

        
    }
};