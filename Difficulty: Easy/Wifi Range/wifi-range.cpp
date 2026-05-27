class Solution {
  public:
    bool wifiRange(string &s, int x) {
        int dist=0;
        int n=s.size();
        if(s=="0")return 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                dist++;
            }else{
                dist=(-x);
            }
            if(dist>x)return 0;
        }
        if(dist>0)return 0;
        return 1;
        
    }
};