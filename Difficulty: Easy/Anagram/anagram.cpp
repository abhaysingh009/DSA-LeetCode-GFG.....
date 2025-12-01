class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        int n1=s1.size();
        int n2=s2.size();
        if(n1!=n2){
            return false;
        }
        int i=0;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        while(i<n1){
            if(s1[i]!=s2[i]){
                return false;
            }
            i++;
        }
        return true;
    }
};