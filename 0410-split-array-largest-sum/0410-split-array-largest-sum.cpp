class Solution {
  public:
bool checker(vector<int>&boards,int mid, int k){
    int count=1;
    int sum=0;
    for(int i=0;i<boards.size();i++){
        if((sum+boards[i])<=mid)sum+=boards[i];
        else {
            if(boards[i]>mid)return 0;
            count++;
            sum=boards[i];
        }

    }
    return count<=k;
}
int splitArray(vector<int> &boards, int k){
    //    Write your code here.
    int low =0;
    int high=1e9;
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(checker(boards,mid,k)){
            ans=mid;
            high=mid-1;
        }else {
            low=mid+1;
        }
    }
    return ans;
    
}
};
