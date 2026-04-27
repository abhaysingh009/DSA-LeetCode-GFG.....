  bool compare(vector<int>&a,vector<int>&b ){
    double x1=1.0*a[0]/a[1];
    double x2=1.0*b[0]/b[1];
    if(x1>x2){
        return 1;
    }
    return 0;

}
class Solution {
  public:

    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int cap) {
        int n=wt.size();
        vector<vector<int>> temp (n,vector<int>(2));
        for(int i=0;i<n;i++){
            temp[i][0]=val[i];
            temp[i][1]=wt[i];
        }
        
        sort(temp.begin(),temp.end(),compare);    
   
        double ans=0;
        int i=0;
        for(i;i<n;i++){
            if(cap>0 and cap>=temp[i][1]){
            cap-=temp[i][1];
            ans+=temp[i][0];
        }else{
            break;
            }
        }
        if(i<n and cap>0){
         double x=1.0*cap*temp[i][0];
         ans=ans+(x/temp[i][1]);
     }
    return ans;
        
    }
};
