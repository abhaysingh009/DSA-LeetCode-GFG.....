class Solution {
  public:
  void dfsRec(int node, vector<vector<int>>& adj,
  
  vector<bool>&visited,vector<int>&ans){
      ans.push_back(node);
      visited[node]=1;
      
      for(int i=0;i<adj[node].size();i++){
          if(!visited[adj[node][i]]){
              dfsRec(adj[node][i],adj,visited,ans);
          }
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
       int n=adj.size();
       vector<bool>visited(n,0);
       vector<int>ans;
       dfsRec(0,adj,visited,ans);
       return ans;
        
    }
};