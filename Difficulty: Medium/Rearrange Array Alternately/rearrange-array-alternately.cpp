class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n=arr.size();
        
        for(int i=0;i<n;i+=2){
        int maxim=i;
        int minim=i;
            for(int j=i;j<n;j++){
                if(arr[j]>arr[maxim]){
                    maxim=j;
                }
                if(arr[j]<arr[minim]){
                    minim=j;
                }
            }
            swap(arr[i],arr[maxim]);
            if(minim==i){
                minim=maxim;
            }
            if(i+1<n)
            swap(arr[i+1],arr[minim]);
        }
        // [1, 6, 5, 2, 3, 4]
        
    }
};