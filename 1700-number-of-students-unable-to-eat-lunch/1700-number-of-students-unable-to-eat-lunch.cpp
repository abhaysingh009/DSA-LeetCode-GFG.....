class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
     queue<int>st(students.begin(),students.end());
     queue<int>sand(sandwiches.begin(),sandwiches.end());  
        int rotations=0;
      while(!st.empty() and !(rotations==st.size())){  
     if(st.front()==sand.front()){
        st.pop();
        sand.pop();
        rotations=0;

     } 
     else{
        st.push(st.front());
        st.pop();
        rotations++;
     }
    }
    return st.size();
    }
};