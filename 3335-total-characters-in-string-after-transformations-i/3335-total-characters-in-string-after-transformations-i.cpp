class Solution {
public:
// // brute force t*n 
//     int lengthAfterTransformations(string s, int t) {
        
//         while(t--){
//             string temp="";
//             for(int i=0;i<s.size();i++){
//                 if(s[i]!='z'){
//                     temp+=(s[i]+1);
//                 }else{
//                     temp+="ab";
//                 }
//             }
//             s=temp;
//         }
//         cout<<s;
//         return s.size();
//     }
int mod=1e9+7;
int lengthAfterTransformations(string s, int t) {
       vector<int>freq(26,0);
       for(char &c:s){
        freq[c-'a']++;
       }


       for(int i=1;i<=t;i++){
        vector<int>temp(26,0);
        for(int i=0;i<26;i++){
            if(i!=25){
                temp[i+1]= freq[i]%mod;
            }else {
                temp[0]+=freq[i]%mod;
                temp[1]+=freq[i]%mod;
            }
        }
        freq=move(temp);
        // for(int &i:temp)i=0;
       }
       int sum=0;
       for(auto it:freq){
        sum=(sum %mod +it%mod)%mod;
       }
       return sum;

       }
};