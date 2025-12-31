class Solution {
public:
int findIndex(vector<int>arr,int value){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==value)return i;
    }
    return -1;

}
    vector<string> findRelativeRanks(vector<int>& arr) {
        priority_queue<int>pq(arr.begin(),arr.end());
        int n=arr.size();
        vector<string>res(n);
        int count=0;
        while(!pq.empty()){
            count++;
            int x=pq.top();pq.pop();
           int idx= findIndex(arr,x);
            if(count==1){
                res[idx]="Gold Medal";
            }
            else if(count==2){
                res[idx]="Silver Medal";
            }
            else if(count==3){
                res[idx]="Bronze Medal";
            }
            else{
                res[idx]=to_string(count);
            }
        }
        return res;
        
    }
};