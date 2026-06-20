class Solution {
public:
#define ll long long 
bool isPrime(ll n){
    if(n==1)return 0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
   ll sumOfLargestPrimes(string s) {
        priority_queue<ll,vector<ll>,greater<ll>>pq;
        string temp="";
        set<ll>st;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                temp=s.substr(i,j-i+1);
                long long x=stoll(temp);
                    if(isPrime(x)){
                        if(!st.count(x))pq.push(x);
                        st.insert(x);
                        if(pq.size()>3)pq.pop();
                    }
            }

        }
        long long ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();

        }
        return ans;
        
    }
};