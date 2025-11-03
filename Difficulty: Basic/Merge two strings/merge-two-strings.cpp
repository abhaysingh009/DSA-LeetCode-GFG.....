
string merge(string s1, string s2) {
    int n1=s1.length();
    int n2=s2.length();
    
    int i=0;
    int j=0;
    
    string res="";
    //when both strings have equal length
    while(i<n1 and j<n2){
        res+=s1[i];
        res+=s2[j];
        i++;
        j++;
        
    }
    //if still first string have elements
     while(i<n1){
        res+=s1[i];
        
        i++;
        
    }
    //if still second string have elements
     while(j<n2){
        res+=s2[j];
        
        j++;
        
    }
    return res;
}