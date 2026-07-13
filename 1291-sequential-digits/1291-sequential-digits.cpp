class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int i=1;i<=9;i++){
            string st=to_string(i);
            for(int j=i+1;j<=9;j++){
                int x=st.back()-'0';
                if(j==x+1){
                    st= st+to_string(j);
                }
                int num=stoi(st);
                if(num>=low and num<=high){
                    ans.push_back(num);
                }else if(num>high)break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};