int firstDigit(int n) {
    int rem=0;
    while(n>0){
        rem=n%10;
        n/=10;
    }
    return rem;
}