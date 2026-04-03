class Solution {
public:
    bool scoreBalance(string s) {
        vector<int>ans;
        for(char c:s){
            ans.push_back((c-'a')+1);
        }
        
    int x=0;
    int y=ans.size()-1;
    int l=0;
    int r=0;
    while(x<y){
        l+=ans[x++];
        r+=ans[y--];
        if(l==r){
            
            return 1; 
        }
        
    }
    return 0;

    }
};