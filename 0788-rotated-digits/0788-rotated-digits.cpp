class Solution {
public:
bool helper(int n){
    int x=n;
    set<int>st={3,4,7};
    bool changed =false;
 
    while(x>0){
        int rem=x%10;
        if(st.count(rem)){
            return 0;
        }
        if(rem==2||rem==5||rem==6||rem==9){
            changed=true;
        }
        
        x/=10;

    }
    return changed;
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