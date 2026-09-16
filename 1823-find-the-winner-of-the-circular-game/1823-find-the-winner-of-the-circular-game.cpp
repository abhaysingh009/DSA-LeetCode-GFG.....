class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        int i=0;
        while(1){
            if(arr.size()==1)break;
            i=(i+k-1)%n;
            arr.erase(arr.begin()+i);
            n=arr.size();
            // i=(i+1)%n;
        }
        return arr[0];        
    }
};