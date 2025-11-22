class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length()-1;
        int p1=0;
        int p2=1;
        int sum=0;
        // arr=h e l l o     4 
        while(p2<=n){
            int val=abs(int(s[p1++])-int(s[p2++]));
            sum+=val;
        }
        return sum;
        
    }
};