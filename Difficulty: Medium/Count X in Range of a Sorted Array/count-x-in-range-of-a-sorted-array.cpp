class Solution {
  public:
  int countfreq(vector<int>&arr,int st,int end,int key){
      int firstOcc=-1;
      int lastOcc=-1;
      //find first occurence
      int i=st;int j=end;
      while(i<=j){
          int mid=(i+j)/2;
          if(arr[mid]==key){
              firstOcc=mid;
              j=mid-1;
              
          }
         else if(arr[mid]<key){
            
              i=mid+1;
          }
          else{
              j=mid-1;
          }
      }
      if(firstOcc==-1)return 0;
      //find last occurence
      i=st;j=end;
      while(i<=j){
          int mid=(i+j)/2;
           if(arr[mid]==key){
              lastOcc=mid;
              i=mid+1;
              
          }
          else if(arr[mid]<key){
              
              i=mid+1;
          }
          else{
              j=mid-1;
          }
      }
      return lastOcc-firstOcc+1;
      
  }
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>res;
       for(int i=0;i<queries.size();i++){
           vector<int>temp=queries[i];
           int count=countfreq(arr,temp[0],temp[1],temp[2]);
            res.push_back(count);
       }
       return res;
        
    }
};