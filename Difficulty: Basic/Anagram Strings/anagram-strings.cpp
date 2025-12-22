// User function Template for C++
class Solution {
  public:
    int areAnagram(string s1, string s2) {
    int n1=s1.size();
    int n2=s2.size();
    if(n1!=n2)return false;

    vector<int>Vs1(26,0);
    vector<int>Vs2(26,0);
    
    for(int e:s1){
        Vs1[e-97]++;
    }
    for(int e:s2){
        Vs2[e-97]++;
    }
    for(int i=0;i<26;i++){
        if(Vs1[i]!=Vs2[i])
        return false;
    }
    return true;
    
    
}
    
};