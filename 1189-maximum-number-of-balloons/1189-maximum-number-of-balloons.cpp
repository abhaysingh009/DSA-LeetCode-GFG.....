#include<algorithm>
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>temp(26,0);
        for(int i=0;i<text.size();i++){
            temp[text[i]-97]++;
        }
        int a=temp['a'-'a'];
        int b=temp['b'-'a'];
        int n=temp['n'-'a'];
        int l=temp['l'-'a'];
        int o=temp['o'-'a'];
        l/=2;
        o/=2;
        return min({b,a,l,o,n});
        
    }
};