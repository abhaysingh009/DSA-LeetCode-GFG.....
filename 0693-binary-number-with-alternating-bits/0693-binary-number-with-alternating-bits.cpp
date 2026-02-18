class Solution {
public:
    bool hasAlternatingBits(int n) {
        string num="";
        while(n>0){
            int rem=n%2;
            num+=to_string(rem);
            n/=2;
        }
        reverse(num.begin(),num.end());
        //if first 1 1010101
        if(num[0]=='1'){
        for(int i=0;i<num.size();i++){
            if(i%2==0 and num[i]=='0'){
                return false;
            }
            if(i%2!=0 and num[i]=='1'){
                return false;
            }
        }
        }
        //if first 0
        else{
            for(int i=0;i<num.size();i++){
            if(i%2==0 and num[i]=='1'){
                return false;
            }
            if(i%2!=0 and num[i]=='0'){
                return false;
            }
        }
        }
        return true;
        
    }
};