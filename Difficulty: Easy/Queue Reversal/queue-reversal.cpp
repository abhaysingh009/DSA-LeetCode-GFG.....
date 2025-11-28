class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        // [5, 10, 15, 20, 25]
        stack<int>st;
        while(!q.empty()){
            st.push(q.front());q.pop();
        }
        while(!st.empty()){
            q.push(st.top());st.pop();
        }
   
   

    }
    
    
    
};