class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        int n=arr.size();
      
        for(int i=n-1;i>=0;i--){
              if(arr[i]!=9){
                arr[i]++;
                break;
                }else{
                    arr[i]=0;
                }
        }
        if(arr[0]==0){
            arr[0]=1;
            arr.push_back(0);
        }
        return arr;
    }
};