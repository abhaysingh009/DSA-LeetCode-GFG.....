class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1;
        unordered_set<char>mapped;

        for(int i=0;i<s.size();i++){

            if(!mp1.count(s[i])){
                //if already mapped then ret 0;
                if(mapped.count(t[i]))return 0;
                mp1[s[i]]=t[i];
                // insert that this char is mapped
                mapped.insert(t[i]);

            }else{
                // if a key is mapped then it should mapped with same char in second occ also
                if(mp1[s[i]]!=t[i])return 0;
            }
        }
        return 1;
       
    }
};