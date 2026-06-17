class Solution {
  public:
    bool isSparse(int n) {
        // code here
        if(n&(n<<1))return 0;
        return 1;
    }
};