class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int totalLength = 0;

        vector<int> charCount(26, 0);
        for(char c : chars) {
            charCount[c - 'a']++;
        }

        for(string word : words) {
            vector<int> wordCount(26, 0);
            bool isGood = true;

            for(char c : word) {
                wordCount[c - 'a']++;

                if(wordCount[c - 'a'] > charCount[c - 'a']) {
                    isGood = false;
                    break;
                }
            }

            if(isGood) {
                totalLength += word.length();
            }
        }

        return totalLength;
    }
};