class Solution {
  public:
    int mean(vector<int>& arr) {
        int sum=0;
        for(int e:arr){
            sum+=e;
        }
        return sum/arr.size();
        
    }

    int median(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        if(n%2==0){
            return (arr[n/2]+arr[(n/2)-1])/2;
        }
        return arr[(n/2)];
    }
};
