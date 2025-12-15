class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int i=0;
        int j=0;
        int k=0;
        
        int n1=arr1.size();
        int n2=arr2.size();
        int n3=arr3.size();
        vector<int>res;
        
        while(i<n1 and j<n2 and k<n3){
            if(arr1[i]==arr2[j] and arr2[j]==arr3[k]){
                if(res.empty()||res.back()!=arr1[i])
                res.push_back(arr1[i]);
                i++;j++;k++;
            }
            else if(arr1[i]<arr2[j]||arr1[i]<arr3[k]){
                i++;
            }
           else if(arr2[j]<arr1[i]||arr2[j]<arr3[k]){
                j++;
            }
           else{
                k++;
            }
        }
        return res;
    }
};