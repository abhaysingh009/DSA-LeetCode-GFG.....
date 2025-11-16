// User function Template for C++

// complete the function
// the function should return the reversed string
string reverseString(string &s) {
    int n=s.length();
    for(int i=0;i<s.length()/2;i++){
        swap(s[i],s[n-1-i]);
    }
    return s;
    
}