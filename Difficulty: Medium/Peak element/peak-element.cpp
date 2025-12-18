class Solution {
  public:
    int peakElement(vector<int> &arr) {
       int n=arr.size();
        
       int first=0;
       int last=n-1;
       while(first<=last){
           bool leftOk=false;
           bool rightOk=false;
           int mid=first+(last-first)/2;
           
           if(mid==0||arr[mid]>arr[mid-1])leftOk=true;
           if(mid==n-1||arr[mid]>arr[mid+1]) rightOk=true;
           
           if(leftOk and rightOk){
               return mid;
           }
           else if(mid>0 and arr[mid]<arr[mid-1]){
               last=mid-1;
           }
           else{
               first=mid+1;
           }
           
           
       }
       return -1;
        
    }
};