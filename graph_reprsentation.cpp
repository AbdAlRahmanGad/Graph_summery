/// adjacency matrix for undirected graph

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // adjacency matrix for undirected graph
    // time complexity: O(n)
    int adj[n+1][n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;// this statement will be removed in case of directed graph
        
     ///   if weihgted 
 //       adj[u][v] = wieght;
 //       adj[v][u] = wieght ;
    }
    return 0;
}

    /// adjacency list for undirected graph

int main()
{
    int n, m;
    cin >> n >> m;
    // adjacency list for undirected graph
    // time complexity: O(2E)
    vector<int> adj[n+1];
    ///if wieghted 
        vector<pair<int,int >> adj[n+1];

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
           ///if wieghted 
             adj[u].push_back({v,wieght});
        adj[v].push_back({u,wieght});
    }
    return 0;
}
    /// adjacency list for directed graph

int main()
{
    int n, m;
    cin >> n >> m;
    // adjacency list for directed graph
    // time complexity: O(E)
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        // u —> v
        cin >> u >> v;
        adj[u].push_back(v);
    }
    return 0;
}