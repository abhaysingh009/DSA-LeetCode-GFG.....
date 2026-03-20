class Solution {
public:
    int countMonobit(int n) {
        int ans=0;
        int x=0;
        while(x<=n){
            ans++;
            x=x+(x+1);
        }
        return ans;
        
    }
};