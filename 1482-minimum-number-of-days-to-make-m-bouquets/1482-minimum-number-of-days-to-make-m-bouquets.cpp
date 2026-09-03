class Solution {
public:
bool check(vector<int> arr,int x,int m,int k){
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=x){
            arr[i]=0;
        }else arr[i]-=x;
    }
    int count=0;
    int temp=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0)count=0;
        else count++;
        if(count==k){
            temp++;
            count=0;
        }
        
    }
    return temp>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low =1;
        int high=1e9;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
        
    }
};