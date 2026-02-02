class Solution {
  public:
    int binaryToDecimal(string &b) {
        long long sum=0;
        int n=b.size();
        for(int i=0;i<b.size();i++){
            int x=b[i]-'0';
            sum=sum+pow(2,n-1-i)*x;
        }
        return sum;
    }
};