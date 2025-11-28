class Solution {
public:
    int timeRequiredToBuy(vector<int>& arr, int k) {
        queue<int>q;
        for(int i=0;i<arr.size();i++){
            // [2,3,2]
            q.push(i);
        }
        // q=0 1 2
    int time=0;
        while(arr[k]!=0){
                arr[q.front()]--;
                int x= arr[q.front()];
                if(x!=0){
                    q.push(q.front());
                }
                q.pop();
                time++;
                


            }

        
        return time;
        
    }
};