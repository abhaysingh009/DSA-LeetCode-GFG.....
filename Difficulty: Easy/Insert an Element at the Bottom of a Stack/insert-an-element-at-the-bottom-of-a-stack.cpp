// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        
        stack<int>temp;

        //push all element in temp stack
        while(!(st.empty())){
            temp.push(st.top());
            st.pop();
        }
                temp.push(x);//push new element in the temp
                
        //push temp stack elems int st stack ;
       while(!(temp.empty())){
           st.push(temp.top());
           temp.pop();
       }
       return st;
        
        
    }
};