class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<string>s;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0 ;k<n;k++){
                    if(i!=j and j!=k and i!=k){
                        if(digits[i]!=0 and digits[k]%2==0){
                            string st=(to_string(digits[i])+to_string(digits[j])+to_string(digits[k]));
                            s.insert(st);
                        }
                    }
                }
            }
        }
        return s.size();
        
    }
};