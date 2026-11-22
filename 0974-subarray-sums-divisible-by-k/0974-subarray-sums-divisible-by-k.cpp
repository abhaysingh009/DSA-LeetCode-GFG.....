// class Solution {
// public:
//     int subarraysDivByK(vector<int>& arr, int k) {
//         int sum=0;
//         int count=0;
//         map<int,int>mp;
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//             sum=((sum+arr[i])%k+k)%k;
//             if(sum==0)count++;
//             if(mp.count(sum)){
//                 count+=mp[sum];
//             }
//             mp[sum]++;

//         }
//         // time O(n)
//         // space O(min(n,k))
//         return count;
//     }
// };
class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int sum=0;
        int count=0;
        vector<int>freq(k,0);
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum=((sum+arr[i])%k+k)%k;
            if(sum==0)count++;
            if(freq[sum]>0){
                count+=freq[sum];
            }
            freq[sum]++;

        }
        // time O(n)
        // space O(min(n,k))
        return count;
    }
};