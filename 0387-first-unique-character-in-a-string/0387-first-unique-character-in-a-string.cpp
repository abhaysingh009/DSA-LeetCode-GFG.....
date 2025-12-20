class Solution {
public:
int countFreq(string &s,char c){
    int count=0;
    for(char ch:s){
        if(ch==c){
            count++;
        }
    }
    return count;
}
    int firstUniqChar(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            int x=countFreq(s,s[i]);
            if(x==1){
                return i;
            }
        }
        return -1;
    }
};