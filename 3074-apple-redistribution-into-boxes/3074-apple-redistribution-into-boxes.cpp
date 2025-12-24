class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());

        int totalApple=0;
        for(int i:apple){
            totalApple+=i;
        }
        int n=capacity.size();
        int temp=0;
        int count=0;
        for(int i=n-1;i>=0;i--){
            temp+=capacity[i];
            count++;
            if(temp>=totalApple){
                break;
            }
        }
        return count;
    }
};