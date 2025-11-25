class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // Brute Force
    //      int n = arr.size();
    //     vector<int> res(n,-1);
    //     for (int i = 0; i < n; i++) {
                     
    //         for (int j = i + 1; j < n; j++) {
    //             if (arr[j] > arr[i]) {
    //                 res[i]=arr[j];
                   
    //                 break;                    
    //             }
    //         }
           
    //     }
    //     return res;
    // }
    
    // optimized approach
    
    int n = arr.size();
    stack <int>st;
    vector<int>res(n,-1);
    for(int i=0;i<n;i++){
        while(!st.empty() and arr[st.top()]<arr[i]){
            res[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    return res;
    }
        
};