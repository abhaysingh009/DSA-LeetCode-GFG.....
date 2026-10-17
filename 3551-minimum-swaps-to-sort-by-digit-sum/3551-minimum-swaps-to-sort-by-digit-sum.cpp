class Solution {
public:
static int sum(int n){
    int s=0;
    while(n>0){
        int rem=n%10;
        s+=rem;
        n/=10;
    }
    return s;
}
static bool comp(int a,int b){
    int x=sum(a);
    int y=sum(b);
    if(x==y){
        return a<b;
    }else {
        return x<y;
    }
}
    int minSwaps(vector<int>& arr) {
         int n=arr.size();
        vector<int>temp=arr;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=i;
        }
        sort(temp.begin(), temp.end(), comp);
        int count=0;
        for(int i=0;i<n;i++){
            while(arr[i]!=temp[i]){
                swap(temp[i],temp[mp[temp[i]]]);
                count++;
                
            }
        }
        return count;
    }
};