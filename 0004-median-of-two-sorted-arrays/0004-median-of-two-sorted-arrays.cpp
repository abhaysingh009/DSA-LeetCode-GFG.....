class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
         vector <int >res;
    int n1=arr1.size();
    int n2=arr2.size();
    int i=0;
    int j=0;
    while(i<n1 and j<n2){
        if (arr1[i]<=arr2[j]){
            res.push_back(arr1[i]);
            i++;

        }
        else{
            res.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1){
        
            res.push_back(arr1[i]);
            i++;

    
    }while(j<n2){
        
            res.push_back(arr2[j]);
            j++;
        
    }
    int nr=res.size();
    if(nr%2!=0){
        return res[nr/2];
    }
    else{
        return (res[nr/2]+res[(nr/2)-1])/2.00;
    }
    
        
    }
};