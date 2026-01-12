class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int i=0;
        int j=arr.size()-1;
       
        while(i<=j){
            int mid=(i+j)/2;
            int prev=(mid-1+arr.size())%arr.size();
            int next=(mid+1)%arr.size();
            if(arr[mid]<=arr[prev] and arr[mid]<=arr[next]){
                return mid;
            }
            if(arr[mid]<=arr[j]){
                j=mid-1;
                
            }
            else if(arr[mid]>=arr[i]){
                i=mid+1;
            }
        }
        return 0;
    }
};
