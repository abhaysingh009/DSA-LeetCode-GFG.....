class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>ran(26,0);
        vector<int>mag(26,0);
        for(char c:ransomNote){
            ran[c-97]++;
        }
        for(char c:magazine){
            mag[c-97]++;
        }
        for(int i=0;i<26;i++){
          
            if(ran[i]>mag[i]){
                return false;
            }

        }
        return true;
    }
};