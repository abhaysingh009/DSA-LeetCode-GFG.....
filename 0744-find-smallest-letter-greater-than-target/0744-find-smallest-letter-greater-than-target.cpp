class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res= letters[0];
           int i=0;
           int j=letters.size()-1;
           while(i<=j){
            int mid=(i+j)/2;

            if(letters[mid]>target){
                res=letters[mid];
                j=mid-1;
            }
            else{
                i=mid+1;
            }
           }
           return res;
    }
};