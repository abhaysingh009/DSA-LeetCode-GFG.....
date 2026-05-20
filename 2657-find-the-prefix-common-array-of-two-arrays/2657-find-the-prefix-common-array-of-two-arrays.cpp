class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>freqA;
        vector<int>res;
        int n=A.size();
        int common=0;
        for(int i=0;i<n;i++){
    
            freqA[B[i]]++;
            if(freqA[B[i]]==2) common++;
                
            freqA[A[i]]++;
            if(freqA[A[i]]==2) common++;
            
            res.push_back(common);

        }
        return res;
        
    }
};
        
