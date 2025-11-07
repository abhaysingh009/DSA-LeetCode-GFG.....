class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            
            for (int k = i; k < n; k++) {
                cout<<" ";
            }
            
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
            
            
        }
        cout<<"\n";
        }
    }
};