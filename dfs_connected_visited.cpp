/// connected - dfs - visited 
    
   
   dfs      visited 
  
    void dfs(int node, vector<vector<int>> adj, int &vis[], vector<int> &ls) {
        vis[node] = 1; 
        ls.push_back(node); 
        // traverse all its neighbours
        for(auto it : adj[node]) {
            // if the neighbour is not visited
            if(!vis[it]) {
                dfs(it, adj, vis, ls); 
            }
        }
    }
    
    
    num of connected components
    
    int counter =0;
    vector<int>visited(isConnected.size()+1);
    
    for(int i=0;i<isConnected.size();i++){
    
        if(!visited[i+1]){
            dfs(isConnected,i,visited);
            
            counter++;
            
        }
    }
