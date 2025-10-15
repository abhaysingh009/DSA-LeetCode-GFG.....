class Solution {
  public:
    void selectionSort(vector<int> &arr) {
      
        for(int i=0;i<arr.size()-1;i++){
            int mini=i;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]<arr[mini]){
                    mini=j;
                }
                
            }
            swap(arr[i],arr[mini]);
            
        }
    }
};