class Solution {
  public:
    int maxPeopleDefeated(int p) {
        int i=1;
        int ans=0;
        while(true){
            p-=(i*i);
            if(p>=0)ans++;
            else break;
            i++;
        }
        return ans;
        
    }
};
