class Solution {
public:
  int countFreq(vector<int>&arr,int key){
    int frq=0;
    for(int e:arr){
        if(e==key){
            frq++;
        }
    }
    return frq;
  }
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>temp;
        set<int>t1(arr.begin(),arr.end());
        for(int e:t1){
            int freq=countFreq(arr,e);
            if(temp.count(freq)){
                return false;
            }
            else{
                temp.insert(freq);
            }
        }
        return true;
        
    }
};