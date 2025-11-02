class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int i=0;
        int j=0;
        string merged="";
        while(i<word1.length() and j<word2.length()){
            merged+=word1[i];
            merged+=word2[j];
            i++;
            j++;
        }
        while(i<word1.length()){
            merged+=word1[i];
            i++;
        }
        while(j<word2.length()){
            merged+=word2[j];
            j++;
        }
        return merged;

        
    }
};