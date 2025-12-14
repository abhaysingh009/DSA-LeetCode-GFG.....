class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        int largest=-1;
        int second=-1;
        for(int i=0;i<n;i++){
            if(s[i]>='0' and s[i]<='9'){
                int x=s[i]-'0';
                if(x>largest){
                    second=largest;
                    largest=x;
                }
                if(x>second and x<largest){
                    second =x;
                }
            }
        }
        return second;
        
    }
};