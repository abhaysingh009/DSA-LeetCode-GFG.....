class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int counteven=0;
        int countodd=0;
        for(int e:arr){
            if(e%2==0){
                counteven++;
            }
            else{
                countodd++;
            }
        }
        return {countodd,counteven};
    }
};