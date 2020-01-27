void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    // Your code here
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(auto x:adj[node]) {
            if(!vis[x]) {
                vis[x] = 1;
                q.push(x);
            }
        }
    }
    
}
