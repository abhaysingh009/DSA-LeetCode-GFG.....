#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string ans="";
    if(n%3 ==0 and n%5==0){
        ans="FizzBuzz";
    }
    if(n%3 !=0 and n%5==0){
        ans="Buzz";
    }
    if(n%3 ==0 and n%5!=0){
        ans="Fizz";
    }
   
    (ans=="")?cout<<n:cout<<ans;
}
