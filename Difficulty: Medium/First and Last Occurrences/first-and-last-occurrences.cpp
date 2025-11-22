class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int ceilVal=-1;
        int floorVal=-1;
        
        int i=0;
        int n=arr.size()-1;
        while(i<=n){
            int mid=i+(n-i)/2;
            if(arr[mid]==x){
                ceilVal=mid;
                i=mid+1;
                
            }
            else if(arr[mid]<x){
                i=mid+1;
            }
            else{
                n=mid-1;
            }
        }
         i=0;
         n=arr.size()-1;
        
         while(i<=n){
            int mid=i+(n-i)/2;
            if(arr[mid]==x){
                floorVal=mid;
                n=mid-1;
                
            }
           else if(arr[mid]>x){
                
                n=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return {floorVal,ceilVal};
        
        
    }
};