class Solution {
  public:
    unsigned int swapBits(unsigned int n) {
        
        unsigned int odd=n& 0xAAAAAAAA;
        
        unsigned int even=n& 0x55555555;
        
        odd>>=1;
        even<<=1;
        
        return (odd|even);
        
                                                
                                 
    }
};