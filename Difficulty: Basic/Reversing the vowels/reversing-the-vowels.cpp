class Solution {
  public:
  
bool isVowel(char c){
    if(c=='a'||c=='A'||c=='e'||c=='E'||
    c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        return true;
    }
    return false;
}
    string modify(string& s){
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(isVowel(s[i]) and isVowel(s[j])){
                swap(s[i],s[j]);
                i++;j--;
            }
            if(!isVowel(s[i])){
                i++;
            }
            if(!isVowel(s[j])){
                j--;
            }
        }
        return s;
        
         }
};