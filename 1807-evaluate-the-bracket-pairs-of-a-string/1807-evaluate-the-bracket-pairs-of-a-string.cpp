class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string , string>mp;
        int n=s.size();
        for(int i= 0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }

        string ans="";
        int i=0;
        while(i<n){
            if(s[i]!='('){
                ans+=s[i++];
            }else {
                i++;
                string temp="";
                while(i<n and s[i]!=')'){
                    temp+=s[i++];
                }   
                auto it=mp.find(temp);
                if(it!=mp.end())
                    ans+=mp[temp];
                else ans+='?';
                    i++;
            }
        }
        return ans;
      
        
    }
};