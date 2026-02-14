class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev=INT_MIN;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                int num=0;
                while(i<n and isdigit(s[i])){
                    num=num*10+s[i]-'0';
                    i++;

                }
                if(num>prev){
                    prev=num;
                }
                else{
                    return 0;
                }

                
        }
        }
        return true;
        
    }
};