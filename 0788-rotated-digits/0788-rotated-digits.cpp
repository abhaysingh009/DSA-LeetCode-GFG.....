class Solution {
public:
bool helper(int n){
    int x=n;
    set<int>st={3,4,7};
    string temp="";
 
    while(x>0){
        int rem=x%10;
        if(st.count(rem)){
            return 0;
        }
        switch(rem){
            case 2:
            rem=5;break;
            case 5:
            rem=2;break;
            case 6:
            rem=9;break;
            case 9:
            rem=6;break;
        }
        temp+=to_string(rem);
        x/=10;

    }
    reverse(temp.begin(),temp.end());
    if(stoi(temp)==n)return 0;
    return 1;
}
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            if(helper(i)){
                count++;
            }
        }
        return count;
        
    }
};