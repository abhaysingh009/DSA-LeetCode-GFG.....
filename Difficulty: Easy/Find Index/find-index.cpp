class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        bool st=true;
        bool lst=true;
        int sti=-1;
        int lsti=-1;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]==key and st){
                sti=i;
                st=0;
            }
            if(arr[n-1-i]==key and lst){
                lsti=n-1-i;
                lst=0;
            }
            if(!st and !lst){
                break;
            }
        }
        return {sti,lsti};
    }
};