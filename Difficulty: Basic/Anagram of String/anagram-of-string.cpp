// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2) {
    int freq1[26] = {0};
    int freq2[26] = {0};

    // count frequency of s1
    for (char c : s1) {
        freq1[c - 'a']++;
    }

    // count frequency of s2
    for (char c : s2) {
        freq2[c - 'a']++;
    }

    int deletions = 0;

    // calculate deletions
    for (int i = 0; i < 26; i++) {
        deletions += abs(freq1[i] - freq2[i]);
    }

    return deletions;
}
