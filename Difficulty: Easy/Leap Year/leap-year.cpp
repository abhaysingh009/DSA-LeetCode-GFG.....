#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%400==0){
        cout<<"True";
    }else if(n%100==0 and n%4==0){
          cout<<"False";
    }else if(n%4==0){
          cout<<"True";
    }else 
      cout<<"False";

    return 0;
}