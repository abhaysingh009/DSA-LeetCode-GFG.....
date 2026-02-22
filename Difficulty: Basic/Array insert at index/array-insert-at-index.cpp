class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        int n=arr.size();
        if(index==n){
        arr.push_back(val);
        return ;
        }
        int x=arr[index];
        arr[index]=val;
        arr.push_back(arr[n-1]);
        
        for(int i=index+1;i<=n;i++){
            swap(arr[i],x);
        }
    }
};
