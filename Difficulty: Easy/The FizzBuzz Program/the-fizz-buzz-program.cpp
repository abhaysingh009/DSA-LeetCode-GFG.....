// User function Template for C++

void fizzBuzz(int num) {
    if(num%3==0 and num%5==0){
        cout<<"FizzBuzz\n";
    }
    else if(num%3==0){
        cout<<"Fizz\n";
    }
    else if(num%5==0){
        cout<<"Buzz\n";
    }
    else{
        cout<<num<<"\n";
    }
    
}