class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        vector<string>st(n);
        int countA=0;
        int countB=0;
        for(int i=0;i<n-1;i++){
            if(rain[i]==1 and rain[i+1]==1 and countA<=countB){
                st[i]="Alice";countA++;
            }else if(rain[i]==1){
                st[i]="Bob";
                countB++;
            }else{
                st[i]="None";
            }
        }
        if(rain[n-1]==1)
        st[n-1]="Bob";
        else st[n-1]="None";
        return st;
        
    }
};