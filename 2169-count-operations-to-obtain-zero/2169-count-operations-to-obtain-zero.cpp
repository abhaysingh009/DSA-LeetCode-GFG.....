class Solution {
public:
    int countOperations(int a, int b) {
        int count =0;
        while(a>0 and b>0){
            if(a>=b){
                a-=b;
                count++;
            }
            else{
                b-=a;
                count++;
            }
        }
        return count;
        
    }
};