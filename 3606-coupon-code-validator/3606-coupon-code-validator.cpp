class Solution {
public:
bool isValidCpn(string s){
    if(!s.size())return false;
    for(char c:s){
        if((c>='a' and c<='z')||
          (c>='A' and c<='Z')||
          (c>='0' and c<='9')||
          c=='_'){}
        else{
            return false;
        }
    }
    return true;

}
 bool isValidCat(string s){
        if(s=="electronics"||s=="grocery"||s=="pharmacy"||s=="restaurant")
        {
            return true;
        }
        return false;
 }
    vector<string> validateCoupons(vector<string>& code, vector<string>& bL, vector<bool>& isActive) {
        vector<string>res;
        vector<string>electr;
        vector<string>gr;
        vector<string>ph;
        vector<string>rest;

        for(int i=0;i<code.size();i++){
            if(isValidCpn(code[i]) and isValidCat(bL[i]) and isActive[i]==true)
            {
               if(bL[i]=="electronics")
                    electr.push_back(code[i]);

                if(bL[i]=="grocery")
                    gr.push_back(code[i]);

                    if(bL[i]=="pharmacy")
                    ph.push_back(code[i]);
        

                    if(bL[i]=="restaurant")
                    rest.push_back(code[i]);
            }

        }
        if(gr.size()>1){
        sort(gr.begin(),gr.end());
        }
        if(electr.size()>1){
        sort(electr.begin(),electr.end());
        }
        if(ph.size()>1){
        sort(ph.begin(),ph.end());
        }
        if(rest.size()>1){
        sort(rest.begin(),rest.end());
        }
        for(int i=0;i<electr.size();i++){
            res.push_back(electr[i]);
        }
        for(int i=0;i<gr.size();i++){
            res.push_back(gr[i]);
        }
        for(int i=0;i<ph.size();i++){
            res.push_back(ph[i]);
        }
        for(int i=0;i<rest.size();i++){
            res.push_back(rest[i]);
        }
        return res;
        
    }
};
//  code = ["SAVE20","","PHARMA5","SAVE@20"], 
//  businessLine = ["restaurant","grocery","pharmacy","restaurant"], 
//  isActive = [true,true,true,true]