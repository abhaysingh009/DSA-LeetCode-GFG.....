class Solution {
public:
typedef long long ll;

    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<ll>cumSum(n);
        cumSum[0]=nums[0];

        for(int i=1;i<n;i++){
            cumSum[i]=nums[i]+cumSum[i-1];
        }

        // range sum
        auto rangeSum=[&](int i, int j)-> long long{
            if(i>j)return 0;
            return cumSum[j]-( (i>0)?cumSum[i-1]:0);
        };

        // NGR 
        vector<int>NGR(n,n);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() and nums[st.top()]<nums[i]){
                NGR[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }

         // total ops to make [i... n-1] non - dec
        vector<ll>ops(n+1,0);
         for(int i=n-1;i>=0;i--){
            int m=NGR[i];
            // i to m-1 segment
            ll seg=(1LL * nums[i]* (m-i))- rangeSum(i,m-1);
            ops[i]=seg + ops[m];

         }

         deque<int>deq;
         int i=0;int j=0;
         ll res=0;
         while(j<n){
            while(!deq.empty() and nums[deq.back()] < nums[j]){
                deq.pop_back();
            }
            deq.push_back(j);

            // shrink if required
            while(i<=j){
                int m=deq.front();
                // i....j
                ll opsCount=ops[i]-ops[m]+ (1LL*nums[m]* (j-m+1)- rangeSum(m,j));
                if(opsCount<=k){
                    break;
                }
                i++;
                if(deq.front()<i){
                    deq.pop_front();
                }
            }
            res+=(j-i+1);
            j++;
        }
        return res;
    }
};