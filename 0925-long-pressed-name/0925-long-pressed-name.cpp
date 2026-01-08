class Solution {
public:
    bool isLongPressedName(string name, string typed) {
       int p1=0;
       int p2=0;
       int n1=name.size()-1;
       int n2=typed.size()-1;
       while(p1<=n1 and p2<=n2){
        if(name[p1]==typed[p2]){
            p1++;p2++;
        }
        else{
            if(p2==0||typed[p2]!=typed[p2-1]){
                return false;
            }
            p2++;
        }
       }
       return p1==(n1+1) and name[p1]==typed[p2];
       
    }
};