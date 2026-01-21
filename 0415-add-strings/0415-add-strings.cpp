class Solution {
public:
    string addStrings(string num1, string num2) {
    int n1=num1.size()-1;
    int n2=num2.size()-1;
    string ans;
    int carry=0;
    while(n1>=0 || n2>=0 ||carry){
        int x=(n1>=0)?num1[n1]-'0':0;
        int y=(n2>=0)?num2[n2]-'0':0;
        int add=x+y+carry;
        ans.push_back((add%10)+'0');
        carry=add/10;
        n1--;n2--;

    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};