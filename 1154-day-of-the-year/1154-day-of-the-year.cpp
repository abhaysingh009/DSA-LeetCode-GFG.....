class Solution {
    bool isLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}

public:
    int dayOfYear(string date) {
        int month=stoi(date.substr(5,2));
        int day=stoi(date.substr(8,2));
        int year=stoi(date.substr(0,4));
        int res=0;
        for(int i=1;i<=month;i++){
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                res+=31;
            }
            else if(i==2){
                if(isLeapYear(year)){
                    res+=29;
                }
                else{
                    res+=28;
                }
            }
            else{
                res+=30;
            }
        }
        res+=day;
        return res;

    }
};