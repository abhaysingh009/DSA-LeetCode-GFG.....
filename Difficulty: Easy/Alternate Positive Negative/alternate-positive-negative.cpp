// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        vector<int>neg;
        vector<int>pos;
        
        for(int e:arr){
            if(e<0){
                neg.push_back(e);
            }
            else{
                pos.push_back(e);
            }
        }
        int i1=0;
        int i2=0;
        int j1=neg.size()-1;
        int j2=pos.size()-1;
        int k=0;
        while(i1<=j1 and i2<=j2){
            arr[k++]=pos[i2++];
            arr[k++]=neg[i1++];
        }
        while(i1<=j1){
            arr[k++]=neg[i1++];
        }
        while(i2<=j2){
            arr[k++]=pos[i2++];
        }
        
        
    }
};