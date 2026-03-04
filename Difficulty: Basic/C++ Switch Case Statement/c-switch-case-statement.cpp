class Solution {
  public:
    void isInRange(int n) {
        string res="";
        if(n>=1 and n<=10){
            switch(n){
                case 1:
                res+="one";
                break;
                case 2:
                res+="two";
                break;
                case 3:
                res+="three";
                break;
                case 4:
                res+="four";
                break;
                case 5:
                res+="five";
                break;
                case 6:
                res+="six";
                break;
                case 7:
                res+="seven";
                break;
                case 8:
                res+="eight";
                break;
                case 9:
                res+="nine";
                break;
                case 10:
                res+="ten";
                break;
            }
        }else{
            res+="not in range";
        }
        cout<<res<<"\n";
    }
};