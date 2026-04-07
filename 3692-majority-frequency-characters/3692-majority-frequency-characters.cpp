class Solution {
public:
    string majorityFrequencyGroup(string s) {
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        map<int, vector<char>>mp;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                mp[freq[i]].push_back('a'+i);
            }
        }
        int maxGroupSize=0;
        int answerFreq=0;
        for (auto it:mp){
            int k=it.first;
            int size=it.second.size();
            if(size>maxGroupSize||(size==maxGroupSize and k>answerFreq)){
                maxGroupSize=size;
                answerFreq=k;
            }

        }
        string res="";
        for(char c:mp[answerFreq]){
            res+=c;
        }
    return res;
        
    }
};