class Solution{
    public:
string generateTag(string caption) {
    string result="#";
    int n=caption.length();
    int i=0;
    bool firstWord=true;

    while (i<n) {
        
        while(i<n&&caption[i]==' ') i++;

        if (i>=n) break;

        string word="";

       
        while(i<n&&caption[i]!=' ') {
            word+=caption[i];
            i++;
        }

       
        if (firstWord){
            for(char &c:word)c=tolower(c);
            result+=word;
            firstWord=false;
        } else{
            word[0]=toupper(word[0]);
            for (int j=1;j<word.size();j++) {
                word[j]=tolower(word[j]);
            }
            result+=word;
        }
    }

    if (result.length()>100) {
        result=result.substr(0,100);
    }

    return result;
}
};