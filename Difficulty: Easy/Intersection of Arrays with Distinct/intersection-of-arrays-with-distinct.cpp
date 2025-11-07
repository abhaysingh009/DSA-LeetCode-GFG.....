class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int n1=a.size()-1;
        int n2=b.size()-1;
        int i=0;
        int j=0;
        int count =0;
        while(i<=n1 and j<=n2){
            if(a[i]==b[j]){
                count++;
                i++;
                j++;
                
            }
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
            
        }
        return count;
    }
};