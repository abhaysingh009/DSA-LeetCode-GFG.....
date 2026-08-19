class Solution {
public:
    int kthFactor(int n, int k) {
        int count=0;
        vector<int>ans;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                count++;
                if(count==k)return i;
                if((n/i)!=i){
                    ans.push_back(n/i);
                }
            }
           
        }
        int s=ans.size();
        int total=count+s;

        if(k>total)return -1;
        int idx=s-(k-count);
        return ans[idx];

    }
};