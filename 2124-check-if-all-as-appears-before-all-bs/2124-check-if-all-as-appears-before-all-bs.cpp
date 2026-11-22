class Solution {
public:
    bool checkString(string s) {
        int counta=0;
        int countb=0;
        for(char c:s){
            if(c=='a')counta++;
            else countb++;
            if(c=='a' and countb>0)return 0;
        }
        return 1;
        
    }
};