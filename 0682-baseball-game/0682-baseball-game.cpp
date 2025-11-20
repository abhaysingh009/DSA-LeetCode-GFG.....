class Solution {
public:
    int calPoints(vector<string>& op) {
        stack <int>st;
        int finalsum=0;

        for(int i=0;i<op.size();i++){
            if(op[i]=="+"){
                int n1=st.top();st.pop();
                int n2=st.top();
                st.push(n1);
                int sum=n1+n2;
                st.push(sum);
            }
            else if(op[i]=="D"){
                int n=2*st.top();
                st.push(n);
            }
            else if(op[i]=="C"){
                st.pop();
            }
            else{
                st.push(stoi(op[i]));

            }
        }
        while(!(st.empty())){
            finalsum+=st.top();
            st.pop();
        }


          
           return finalsum;
    }
};