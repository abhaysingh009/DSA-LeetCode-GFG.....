class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>freqA;
        unordered_map<int,int>freqB;
        vector<int>res;
        int prev=0;
        int n=A.size();
        for(int i=0;i<n;i++){
            freqA[A[i]]++;
            freqB[B[i]]++;
            int x=0;
            if(freqA.count(B[i])){
               if(freqA[B[i]]==freqB[B[i]]){
                    x+=1;
                }
                
            }
            if(freqB.count(A[i])){
                if(freqB[A[i]]==freqA[A[i]]) x+=1;
            }
            if(A[i]==B[i])x--;
            res.push_back(x+prev);
            prev=res.back();


        }
        return res;
        
    }
};