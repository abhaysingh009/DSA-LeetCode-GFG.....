class Solution {
public:
    typedef vector<vector<int>> Matrix;
    int mod=1e9+7;

    Matrix mul(Matrix a , Matrix b){
        Matrix res(26,vector<int>(26,0));
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                for(int k=0;k<26;k++){
                   res[i][j]= (res[i][j]%mod+(1LL*a[i][k]%mod * b[k][j]%mod)%mod)%mod;
                }
            }
        }
        return res;
    }
    Matrix matExp(Matrix b, int p){
        if(p==0){
            Matrix identity(26,vector<int>(26,0));
            for(int i=0;i<26;i++){
                identity[i][i]=1;
            }
            return identity;
        }
        Matrix half=matExp(b,p/2);
        Matrix res=mul(half,half);
        if(p%2){
            res=mul(res,b);
        }
        return res;

    }
    int lengthAfterTransformations(string s, int t, vector<int>& nums) {
        vector<int> freq(26,0);
        for(char &c:s){
            freq[c-'a']++;
        }
        // Now form the T Matrix
        Matrix T(26,vector<int>(26,0));
        for(int i=0;i<26;i++){
            for(int j=1;j<=nums[i];j++){
                T[(i+j)%26][i]++;
            }
        }
        // find T to the power t
        Matrix res=matExp(T,t);
        vector<int>updated_freq(26,0);
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                updated_freq[i]=(updated_freq[i]%mod+1LL*res[i][j]%mod * freq[j]%mod)%mod;
            }
        }
        int ans=0;
        for(int &i: updated_freq){
            ans=(ans%mod + i%mod)%mod;
        }
        return ans;
    }
};