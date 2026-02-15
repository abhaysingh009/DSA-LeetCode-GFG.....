class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        int n=arr.size();
        int fh=0;
        int sh=0;
        int c=0;
        for(int e:arr){
            c++;
            if(c<=n/2){
                fh+=e;
            }else{
                sh+=e;
            }
            
        }
        return abs(sh-fh);
        
    }
};
