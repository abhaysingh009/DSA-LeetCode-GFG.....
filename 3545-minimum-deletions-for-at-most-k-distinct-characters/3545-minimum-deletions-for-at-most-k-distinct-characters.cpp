class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int>freq(26,0);
        vector<int>temp;;

        int count=0;
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        for(int i :freq){
            if(i>0){
                temp.push_back(i);
            }
        }
        sort(temp.begin(),temp.end());
        int n=temp.size();
        if(n>k){
            n=n-k;
            for(int i=0;i<n;i++)
            count+=temp[i];

        }
        return count;
        
    }
};