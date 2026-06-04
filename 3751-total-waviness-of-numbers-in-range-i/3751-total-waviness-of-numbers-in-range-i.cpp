class Solution {
public:
int helper(int n){
    vector<int>arr;
    while(n>0){
        arr.push_back(n%10);
        n/=10;
    }
    int ans=0;
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1]) ans++;
        else if(arr[i]<arr[i-1] and arr[i]<arr[i+1])ans++;
    }
    return ans;
}
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            ans+=helper(i);
        }
        return ans;
    }
};