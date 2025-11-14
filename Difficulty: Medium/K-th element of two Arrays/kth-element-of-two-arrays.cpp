class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
       vector<int>res;
       
       int f1=0;
       int f2=0;
       int l1=a.size()-1;
       int l2=b.size()-1;
       
       while(f1<=l1 and f2<=l2){
          
           if(a[f1]<b[f2]){
               res.push_back(a[f1++]);
           
            
           }
           else{
               res.push_back(b[f2++]);
           }
       }
       while(f1<=l1){
           res.push_back(a[f1++]);
       }
        while(f2<=l2){
           res.push_back(b[f2++]);
       }
    return res[k-1];
        
    }
};