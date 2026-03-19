class Solution {
public:
    bool isFascinating(int n) {
        string st="";
        st+=to_string(n);
        st+=to_string(n*2);
        st+=to_string(n*3);
        if(st.size()!=9)return false;
        for(int i=1;i<=9;i++){
            char x=i+'0';
            if(st.find(x)==string::npos){
                return 0;
            }
        }
        return 1;
        
    }
};