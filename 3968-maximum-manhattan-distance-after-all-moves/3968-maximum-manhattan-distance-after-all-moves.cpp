class Solution {
public:
    int maxDistance(string moves) {
        int l,r,u,d,underscore;
        u=r=l=d=underscore=0;
        for(char c:moves){
            if(c=='_')underscore++;
            else if(c=='U')u++;
            else if(c=='D')d++;
            else if(c=='L')l++;
            else if(c=='R')r++;
        }
        int hor=abs(l-r);
        int ver=abs(u-d);
        return underscore+hor+ver;
        
    }
};