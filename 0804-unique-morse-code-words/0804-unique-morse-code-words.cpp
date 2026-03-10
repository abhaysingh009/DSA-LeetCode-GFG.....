class Solution {
public:
    string convert(string s){
        vector<string> morse = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."
        };
        string ans="";
        for(char c:s){
            int x=c-'a';
            ans+=morse[x];
        }
        return ans;
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        
        set<string>st;
        for(string s:words){
            string temp=convert(s);
            if(!st.count(temp)){
                st.insert(temp);
            }
        }
        return st.size();
    }
};