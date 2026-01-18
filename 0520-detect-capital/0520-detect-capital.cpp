class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper=0;
       for(char c:word){
        if(c>='A' and c<='Z'){
            upper++;
        }
       }
       if(upper==word.size())return true;
       if(upper==0)return true;
       if(upper==1 and word[0]>='A' and word[0]<'Z')return true;

        return false;
    }
};