// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        for(char c:s){
            if(c!='1' && c!='0')return false;
        }
        return true;
    }
};