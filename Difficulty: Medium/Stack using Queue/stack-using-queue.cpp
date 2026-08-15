class myStack {
    queue<int> q;

  public:

    void push(int x) {
      q.push(x);
      int a=q.size()-1;
      
      while(a--){
          int t=q.front();q.pop();
          q.push(t);
          
      }
    }

    void pop() {
        if(!q.empty()){
            q.pop();
        }
    }

    int top() {
        if(!q.empty()){
            return q.front();
        }else return -1;
    }

    int size() {
        return q.size();
    }
};
