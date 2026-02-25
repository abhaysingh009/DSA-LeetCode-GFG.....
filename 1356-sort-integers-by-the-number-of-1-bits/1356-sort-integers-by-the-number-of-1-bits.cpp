class Solution {
public:
int calBit(int n){
    int count=0;
    while(n>0){
        int rem=n%2;
        if(rem)count++;
        n/=2;
    }
    return count;
}

void bubbleSort(vector<int>&m,vector<int>&temp, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if((temp[j] > temp[j+1]) || (temp[j]==temp[j+1] and m[j]>m[j+1] )) {
                swap(m[j], m[j+1]);
                swap(temp[j], temp[j+1]);
            }
        }
    }
}

vector<int> sortByBits(vector<int>& arr) {
    
    vector<int>temp;
    for(int i=0;i<arr.size();i++){
        temp.push_back(calBit(arr[i]));
    }
    bubbleSort(arr,temp,arr.size());
        

    return arr;    
    }
};

