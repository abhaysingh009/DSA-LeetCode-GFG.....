class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        int prev=arr[0];
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            if(i==0){
                prev=arr[i];
                arr[i]^=arr[i+1];
            }else if(i<n-1){
                int x=arr[i];
                arr[i]=prev^arr[i+1];
                prev=x;
            }else{
               
                arr[i]^=prev;
         }
        
    }
    }
};