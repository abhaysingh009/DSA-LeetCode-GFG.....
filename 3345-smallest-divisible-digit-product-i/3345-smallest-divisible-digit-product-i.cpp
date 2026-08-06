class Solution {
public: 
int digiProdz(int n){
    int prod=1;
    while(n>0){
        prod*=(n%10);
        n/=10;
    }
    return prod;
}
    int smallestNumber(int n, int t) {
        for(int i=1;i<=10;i++){
           if(digiProdz(n)%t==0){
            return n;
           } 
           n++;
        }
        return 1;
        
    }
};