class Solution {
  public:
    // Function to push an element into the stack.
    void insert(stack<int> &s, int x) {
        s.push(x);
        
    }

    // Function to remove top element from stack.
    void remove(stack<int> &s) {
        
        s.pop();
    }

    // Function to print the top element of stack.

        
    void headOf_Stack(stack<int> &s) {
       cout<<s.top()<<"\n";
    }

        
    // Function to search an element in the stack.
    bool find(stack<int> s, int val) {
        while(!s.empty()){
            if(s.top()==val){
                return 1;
            }
            s.pop();
            
        }
        return 0;
    }
};