class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int sum=gain[0];
        for(int i=1;i<gain.size();i++){
            sum+=gain[i];
            gain[i]=sum;
        }
        int m=INT_MIN;
        for(int i:gain){
            m=max(m,i);
        }
        return (m<=0)?0:m;
        
    }
};