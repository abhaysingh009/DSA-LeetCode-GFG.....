// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        queue<Node*>q;
        q.push(root);
        vector<int>res;
        while(!q.empty()){
            int max=INT_MIN;
            int size=q.size();
            while(size--){
                Node* temp=q.front();q.pop();
                if((temp->data)>max){
                    max=temp->data;
                }
                if(temp->left){
                    q.push(temp->left);
                }
                 if(temp->right){
                    q.push(temp->right);
                }
                
            }
            res.push_back(max);
        }
        return res;
        
    }
};