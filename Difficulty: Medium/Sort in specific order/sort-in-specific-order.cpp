class Solution {
  public:
    void sortIt(vector<int>& arr) {
        //to store odd values
        vector<int>odd;
        //to store even values
        vector<int>even;
        //store values in odd and even vectors 
        for(int e:arr){
            if(e%2==0){
                even.push_back(e);
            }
            else{
                odd.push_back(e);
            }
        }
        // sort even vector in ascending order
        sort(even.begin(),even.end());
        
        // sort odd vector in ascending order
        sort(odd.begin(),odd.end());
        
        // reverse odd vector to sort it descending order
        reverse(odd.begin(),odd.end());
        
        // copy back odd vector in array 
        int k=0;
        for(int i=0;i<odd.size();i++){
            arr[k++]=odd[i];
        }
        
        //copy back even vector in array
         for(int i=0;i<even.size();i++){
            arr[k++]=even[i];
        }
        
    }
};