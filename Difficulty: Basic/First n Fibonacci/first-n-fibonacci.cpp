// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        int a=0;
        int b=1;
        if(n==1){
            return {a};
        }
        if(n==2){
            return {a,b};
        }
        vector<int>res;
        res.push_back(a);
        res.push_back(b);
        
        for(int i=3;i<=n;i++){
            int c=a+b;
            res.push_back(c);
            a=b;
            b=c;
        }
        return res;
        
    }
};