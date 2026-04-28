class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int sum=gain[0];
        for(int i=1;i<gain.size();i++){
            sum+=gain[i];
            gain[i]=sum;
        }
        int m=INT_MIN;
        for(int i=0;i<gain.size();i++){
            m=max(m,gain[i]);
        }
        if(m<=0){
            return 0;
        } else{
            return m;
        }
        
    }
};