class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int t) {
       
        int n=arr.size();
        int first=0;
        int last=n-1;
        int firstO=-1;
        int lastO=-1;
        while(first<=last){
            int mid=(first+last)/2;
            if(arr[mid]==t){
                firstO=mid;
                last=mid-1;
            }else if(arr[mid]<t){
                first=mid+1;
            }else{
                last=mid-1;
            }
        }
        //last Occurence
        first=0;last=n-1;
         while(first<=last){
            int mid=(first+last)/2;
            if(arr[mid]==t){
                lastO=mid;
                first=mid+1;
            }
            else if(arr[mid]<t){
                first=mid+1;
            }
            else{
                last=mid-1;
            }
        }
        return{firstO,lastO};
       
        
    }
};