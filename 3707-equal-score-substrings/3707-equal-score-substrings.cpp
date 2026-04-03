class Solution {
public:
    bool scoreBalance(string s) {
        int total=0;
    for(char c:s){
            total=total+(c-'a')+1;
        }
    int left=total;
    int right=0;
    for(int i=0;i<s.size();i++){
        left-=(s[i]-'a')+1;
        right+=(s[i]-'a')+1;
        if(left==right){
            return 1;
        }
    }
    return 0;
        
    }
};