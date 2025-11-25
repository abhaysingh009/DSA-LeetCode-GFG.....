class SpecialStack {
  public:
  
  stack<int>st;
  stack<int> minst;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        st.push(x);
        if(minst.empty()||x<=minst.top()){
            minst.push(x);
        }
    }

    void pop() {
         if (st.empty()) return ;
        if(st.top()==minst.top()){
            minst.pop();
        }
        
        st.pop();
    }

    int peek() {
         if (st.empty()) return -1;
        return st.top();
    }

    bool isEmpty() {
        return st.empty();
    }

    int getMin() {
        if (minst.empty()) return -1;
        return minst.top();
    }
};