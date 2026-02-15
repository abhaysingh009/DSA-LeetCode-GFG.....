class Solution {
public:
    char slowestKey(vector<int>& arr, string s) {
            int diff=arr[0];
            char res=s[0];
        for(int i=1;i<arr.size();i++){
           int  temp=arr[i]-arr[i-1];
           if(temp>diff){
            diff=temp;
            res=s[i];
           }
           else if(temp==diff){
            res=max(res,s[i]);
           }
            
        }
        return res;
        
    }
};
           