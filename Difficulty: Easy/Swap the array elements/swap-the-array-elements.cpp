/*Function to swap array elements
 * arr : array input
 */
class Solution {
  public:
    // Function to swap elements of the array
    void swapElements(vector<int> &arr) {
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            if(i+2>=n)break;
            swap(arr[i],arr[i+2]);
        }
        
    }
};