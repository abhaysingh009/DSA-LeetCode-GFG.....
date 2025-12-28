// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        // -10 -9 -6 -5 -1 0 1 4 6 8 
        sort (arr.begin(),arr.end());
        
        int i=0;int j=arr.size()-1;
        vector<vector<int>> res;
        while(i<j){
            vector<int>temp;
            int x=abs(arr[i]);
            int y=abs(arr[j]);
           
            if(x==y ){
                if(arr[i]<=0 and arr[j]>=0){
               temp.push_back(arr[i]); 
               temp.push_back(arr[j]);
               if(res.empty()||res.back()!=temp)
               res.push_back(temp);
                }
                i++;j--;
               
            }
           else if(x<y){
                j--;
            }
            else if(x>y){
                i++;
                
            }
            
        }
        return res;
    }
};