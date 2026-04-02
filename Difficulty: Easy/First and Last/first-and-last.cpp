class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        int i=0;
        int j=arr.size()-1;
        int l=-1;
        int f=-1;
        //first
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==x){
                f=mid;
                j=mid-1;
            }else if(arr[mid]<x){
                i=mid+1;
            }else{
                j=mid-1;
            }
            
        }
        //last
        i=0;
        j=arr.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(arr[mid]==x){
               l=mid;
               i=mid+1;
            }else if(arr[mid]>x){
                j=mid-1;
            }else{
                i=mid+1;
            }
            
        }
        if(f==-1 and l==-1)return {-1};
        return {f,l};
        
    }
};