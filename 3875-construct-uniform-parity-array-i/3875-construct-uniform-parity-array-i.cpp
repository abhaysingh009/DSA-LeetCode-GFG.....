class Solution {
public:
    bool uniformArray(vector<int>& nums) {
    //     int even=0;
    //     int odd=0;
    //     int n=nums.size();
    //     unordered_set<int>st;
    
    // for(int i:nums){
    //     if(i%2==0){
    //         even++;
    //     }else{
    //         odd++;
    //     }
    //     st.insert(i);
    // }
    //     if(n==odd or n==even)return 1;
    //    for(int i=0;i<n;i++){
    //        for(int j=0;j<n;j++){
    //            int d=nums[i]-nums[j];
    //            if(st.count(d) and i!=j){
    //                continue;
    //            }else{
    //                st.insert(d);
    //                if(d%2==0){
    //                    even++;
    //                }else{
    //                    odd++;
    //                }
    //            }
    //        }
    //    }
        
    // return n<=even or n<=odd;
    return 1;
    }
};