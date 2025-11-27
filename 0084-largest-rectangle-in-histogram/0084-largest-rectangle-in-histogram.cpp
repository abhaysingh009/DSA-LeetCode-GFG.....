class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        //right smalles
        vector<int>right(n);
        //left smalest
        vector<int>left(n);
        stack<int>st;
    //next right smallest
        for(int i=0;i<n;i++){
            while(!st.empty() and arr[i]<arr[st.top()]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        //reamining elements in stack 
        while(!st.empty()){
            right[st.top()]=n;
            st.pop();
            }


            //next left smallest
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and arr[i]<arr[st.top()]){
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        //reamining elements in stack 
        while(!st.empty()){
            left[st.top()]=-1;
            st.pop();
            }
        //calulate area 
        int finalArea=0;
        int area=0;
            for(int i=0;i<n;i++){
                int width=(right[i]-left[i])-1;
                area=arr[i]*width;
                finalArea=max(finalArea,area);

            }
            return finalArea;


        
    }
};