class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int ls=0;
            int rs=0;

            for(int j=0;j<i;j++){
                ls+=arr[j];
            }
            for(int k=i+1;k<n;k++){
                rs+=arr[k];
            }

            if(ls==rs){
                return i;
            }
        }
        return -1;
        
    }
};