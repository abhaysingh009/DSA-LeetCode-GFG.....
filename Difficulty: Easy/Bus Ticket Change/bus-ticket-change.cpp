class Solution {
  public:
    bool canServe(vector<int> &arr) {
        int count5=0;
        int count10=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==5){
                count5++;
            }
            if(arr[i]==10){
                count10++;
                if(count5>0){
                    count5--;
                }else{
                    return 0;
                }
                
            }
            if(arr[i]==20){
                if(count10>0 and count5>0){
                    count10--;
                    count5--;
                }else{
                    if(count5>=3){
                        count5-=3;
                    }else{
                        return 0;
                    }
                }
                
            }
        }
        return 1;
        
    }
};