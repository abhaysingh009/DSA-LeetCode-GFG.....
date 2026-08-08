class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n =word1.size();
        int m=word2.size();
        if(n!=m)return  0;
        map<char, int>mp;
        map<char, int>mp2;
        for(char c:word1){
            mp[c]++;
        }
        for(char c:word2){
            mp2[c]++;
        }

        for(char c :word1){
             if((mp[c]>0 && mp2[c]==0) || (mp[c]==0 && mp2[c]>0))return false;
        }

        vector<int>v1;
        vector<int>v2;
        for(auto it:mp){
            v1.push_back(it.second);
        }
        for(auto it:mp2){
            v2.push_back(it.second);

        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;


        
    }
};