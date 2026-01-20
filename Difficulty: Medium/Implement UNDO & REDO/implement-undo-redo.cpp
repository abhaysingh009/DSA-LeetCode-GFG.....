class Solution {
  public:
  string arr="";
  stack<char>st;
    void append(char x) {
        arr.push_back(x);
    }

    void undo() {
        int n=arr.size()-1;
        if(n<0)return;
        st.push(arr[n]);
        arr.pop_back();
    }

    void redo() {
        if(st.empty())return;
        arr.push_back(st.top());st.pop();
    }

    string read() {
        return arr;
    }
};