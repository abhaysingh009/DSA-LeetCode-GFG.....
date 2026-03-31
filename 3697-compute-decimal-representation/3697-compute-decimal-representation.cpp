class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        int count=0;
        int k=n;
        while(k>0){
            k/=10;
            count++;
        }
        vector<int>ans;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            string x="";
            x+=s[i];
            int b=count-1-i;
            while(b>0){
                x+='0';
                b--;
            }
            int a=stoi(x);
            if(a!=0){
                ans.push_back(a);
            }
        }
        return ans;
        
    }
};