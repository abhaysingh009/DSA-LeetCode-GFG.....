class Solution {
  public:
    int findSum(string& s) {
            string temp="";
            int sum=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                temp+=s[i];
            }else if(temp!=""){
                sum=sum+stoi(temp);
                temp="";
            }
        }
        if(temp!="")sum=sum+stoi(temp);
        return sum;
        
    }
};