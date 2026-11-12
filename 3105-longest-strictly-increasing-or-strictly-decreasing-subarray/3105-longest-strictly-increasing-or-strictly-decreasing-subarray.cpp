class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int inc=1;
        int dec=1;
        int n=arr.size();
        int countInc=1;
        int countDec=1;

        for(int i=0;i<n-1;i++){

            // for increasing 
            if(arr[i]<arr[i+1])countInc++;
            else{
                inc=max(inc,countInc);
                countInc=1;
            }
            // for decreasing 
            if(arr[i]>arr[i+1])countDec++;
            else{
                dec=max(dec,countDec);
                countDec=1;
            }
        }
        inc=max(countInc,inc);
        dec=max(countDec,dec);
        return max(dec,inc);
    }
};