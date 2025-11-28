class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
       int n=q.size();
        if (k <= 0 || k > n) return q;
       int x=k;
       stack<int>st;
       //pop k elements from q push them in st
       while(x--){
           st.push(q.front());
           q.pop();
       }
       //push stack elements in q 
       while(!st.empty()){
           q.push(st.top());st.pop();
       }
    int y=n-k;
    while(y--){
        q.push(q.front());q.pop();
    }
    return q;
    }
};