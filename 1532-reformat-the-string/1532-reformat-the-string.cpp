class Solution {
public:
    string reformat(string s) {
        string alpha="";
        string num="";
        for(char c:s){
            if(c>='0' and c<='9'){
                num+=c;
            }
            else{
                alpha+=c;
            }
        }
        int a=alpha.size();
        int n=num.size();
        if(abs(a - n) > 1)
            return "";
            
         string result = "";
        
        
        bool startWithAlpha = alpha.size() > num.size();
        
        int i = 0, j = 0;
        
        while(i < alpha.size() || j < num.size()) {
            
            if(startWithAlpha && i < alpha.size())
                result += alpha[i++];
            
            if(j < num.size())
                result += num[j++];
            
            if(!startWithAlpha && i < alpha.size())
                result += alpha[i++];
        }
        return result;
        
    }
};