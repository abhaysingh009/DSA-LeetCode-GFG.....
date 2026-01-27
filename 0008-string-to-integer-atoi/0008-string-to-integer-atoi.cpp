class Solution {
public:
    int myAtoi(string s) {
        bool neg=false;
        s.erase(0,s.find_first_not_of(" "));
        if(s[0]=='-'){
            neg=true;
            s.erase(0,1);
        }
        else if(s[0]=='+'){
            s.erase(0,1);
        }
        int i=0;
        string mainst="";
        while(s[i]>='0' and s[i]<='9'){
                mainst+=s[i];
                i++;
        }
        long long x=0;
        bool after=false;
        for(int i=0;i<mainst.size();i++){
            x=x*10+mainst[i]-'0';
            if(x>INT_MAX){
                after=true;
                x=INT_MAX;
                break;
            }
           
        }
        if(neg){
            if(x==INT_MAX and after){
                x+=1;
            }
            x=-x;
            
        }
    return x;
        
    }
};