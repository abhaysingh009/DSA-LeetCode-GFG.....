class Solution {
public:
int value(char i){
    if(i=='I')return 1;
    if(i=='V')return 5;
    if(i=='X')return 10;
    if(i=='L')return 50;
    if(i=='C')return 100;
    if(i=='D')return 500;
    if(i=='M')return 1000;
    return 0;
   

}
    int romanToInt(string s) {
        int result=0;
        for(int i=0;i<s.length();i++){
        
        int curr=value(s[i]);
        int next=value(s[i+1]);
        if(curr>=next){
            result+=curr;
        }
        else{
            result -=curr;
        }
        }
        return result;
        
    }
};