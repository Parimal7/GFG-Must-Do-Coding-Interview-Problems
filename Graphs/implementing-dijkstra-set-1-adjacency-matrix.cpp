void dijkstra(vector<vector<int>> graph, int src, int V)
{
    int dist[V];
    for(int i = 0; i < V; ++i) dist[i] = INT_MAX;
    bool visited[V] = {0};
    priority_queue<pair<int, int> > pq;
    dist[src] = 0;
    pq.push(make_pair(0, src));
    while(!pq.empty()) {
        pair<int, int> current = pq.top();
        pq.pop();
        int node = current.second;
        int distanceFromsrc = -1 * current.first;
        if(visited[node] == true) continue;
        //cout << "Currently processing node " << node << " with distFromSrc " << distanceFromsrc << endl;
        visited[node] = true;
        for(int i = 0; i < V; ++i) {
            if(visited[i] == false && graph[node][i] != 0) {
                int newDist = distanceFromsrc + graph[node][i];
                if(newDist <= dist[i]) {
                    dist[i] = newDist;
                    pq.push(make_pair(-1 * dist[i], i));
                }
            }
        }
        
    }
    for(int i = 0; i < V; ++i) {
        cout << dist[i] << " ";
    }
}
