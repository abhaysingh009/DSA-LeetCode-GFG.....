class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        int n=s1.size();
        if(n<2)return false;
        string left =s1.substr(2)+s1.substr(0,2);
        string right=s1.substr(n-2)+s1.substr(0,n-2);
        if(s2== left or s2== right){
            return 1;
        }
        return 0;
        
    }
};
