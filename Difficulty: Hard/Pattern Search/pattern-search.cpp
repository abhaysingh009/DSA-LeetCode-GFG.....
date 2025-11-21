
class Solution {
  public:
    // Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) {
        int m=pat.size();
        int n=txt.size();
        if(pat.empty())return true;
        if(m>n)return false;
        
        
        
        for(int i=0;i<=n-m;i++){
            int a=0;
            while(a<m && txt[i+a]==pat[a]){
                a++;
                
            }
                if(a==m)return true;
            
        }
        return false;
        
        
        
    }
};
