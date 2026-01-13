class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
       int v=adj.size();
       
       queue<int>q;
       vector<bool>visited(v,0);
       vector<int>ans;
       q.push(0);
       visited[0]=1;
       
       
       while(!q.empty()){
           int node=q.front();q.pop();
           ans.push_back(node);
           
           for(int i=0;i<adj[node].size();i++){
               if(!visited[adj[node][i]]){
                   visited[adj[node][i]]=1;
                   q.push(adj[node][i]);
               }
           }
       }
       return ans;
        
    }
};