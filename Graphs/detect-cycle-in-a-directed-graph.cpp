bool dfs(vector<int> adj[], int source, int parent[], int visited[]) {
    visited[source] = 1;
    for(auto x:adj[source]) {
        if(visited[x] == 0) {
            parent[x] = source;
            if(dfs(adj, x, parent, visited))
                return true;
        }
        else if(visited[x] == 1) {
           return true;
        }
    }
    visited[source] = 2;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    bool flag = false;
    int parent[V+1];
    int visited[V+1] = {0};
    memset(parent, -1, sizeof(parent));
    for(int i = 0; i < V; ++i) {
        if(visited[i] == 0) {
            flag = dfs(adj, i, parent, visited);
            if(flag) break;
        }
    }
    return flag;
}
