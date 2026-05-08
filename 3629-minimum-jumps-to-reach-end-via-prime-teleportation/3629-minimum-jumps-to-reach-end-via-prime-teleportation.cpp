class Solution {
public:
    int minJumps(vector<int>& nums) {
        int n=nums.size();

        if (n==1) return 0;

        int mx=*max_element(nums.begin(),nums.end());
        vector<int> spf(mx+1);

        for (int i=0;i<=mx;i++) {
            spf[i]=i;
        }

        for(long long i=2;i*i<=mx;i++){
            if (spf[i]==i){
                for (long long j=i*i;j<=mx;j+=i){
                    if (spf[j]==j){
                        spf[j]=i;
                    }
                }
            }
        }
        unordered_map<int,vector<int>>mp;

        for (int i=0;i<n;i++) {
            int x=nums[i];

            unordered_set<int>factors;

            while (x>1){
                factors.insert(spf[x]);
                x/=spf[x];
            }

            for (int p:factors){
                mp[p].push_back(i);
            }
        }

        vector<int>vis(n,0);

        queue<pair<int,int>>q;
        q.push({0,0});

        vis[0]=1;

        unordered_set<int>usedPrime;

        while(!q.empty()){
            auto [idx,steps]=q.front();
            q.pop();

            if(idx==n-1)return steps;
            if(idx-1 >=0&&!vis[idx-1]){
                vis[idx-1]=1;
                q.push({idx-1,steps+1});
            }

            if (idx+1<n&&!vis[idx+1]){
                vis[idx+1]=1;
                q.push({idx+1,steps+1});
            }

            int val=nums[idx];
            if(val>1&&spf[val]==val&&!usedPrime.count(val)) {

                for (int next:mp[val]){
                    if (!vis[next]){
                        vis[next]=1;
                        q.push({next,steps+1});
                    }
                }

                usedPrime.insert(val);
            }
        }

        return -1;
    }
};