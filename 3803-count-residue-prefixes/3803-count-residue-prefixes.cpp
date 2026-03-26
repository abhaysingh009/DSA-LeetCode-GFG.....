class Solution {
public:
    int findDistinct(string s){
        int count=0;
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        for(int e:freq){
            if(e>0){
                count++;
            }
        }
        return count;
    }
    int residuePrefixes(string s) {
        int n=s.size();
        vector<string>c;
        int ans=0;
        c.push_back(string(1,s[0]));
        for (int i=1;i<n;i++){
            string t=c.back();
            c.push_back(t+s[i]);
        }
        for(string st:c){
            int x=findDistinct(st);
            if(x==(st.size()%3)){
                ans++;
            }
        }
        return ans;
    }
};