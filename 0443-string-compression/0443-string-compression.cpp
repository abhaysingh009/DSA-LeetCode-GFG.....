class Solution {
public:
    int compress(vector<char>& arr) {
        if(arr.size()==1)return 1;
        int n=arr.size();
         vector<string>st;
        for(int i=0;i<n-1;i++){
            string temp="";
            while(i<n-1 and arr[i]==arr[i+1] ){
                temp+=arr[i];
                i++;
                
            }
            temp+=arr[i];
            st.push_back(temp);
        }
        if(arr[n-1] != st.back()[0])
{
    st.push_back(string(1, arr[n-1]));
}
        string ans="";
        for(int i=0;i<st.size();i++){
            string t=st[i];
            ans+=t[0];
            if(st[i].size()>1){
            ans+=to_string(st[i].size());
            }
        }
        arr.resize(ans.size());
        for(int i=0;i<ans.size();i++){
            arr[i]=ans[i];
        }
        return ans.size();
        
        
    }
};