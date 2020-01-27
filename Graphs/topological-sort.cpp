void topological_sort(stack<int>&s, int V, vector<int> adj[], bool vis[]){
    vis[V]=true;
    for(int i=0;i<adj[V].size();i++){
        if(!vis[adj[V][i]]) topological_sort(s,adj[V][i],adj,vis);
    }
    s.push(V);
}

int* topoSort(int V, vector<int> adj[]){
    stack<int>s;
    bool vis[V+1]={false};
    for(int i=0;i<V;i++){
        if(vis[i]==false) topological_sort(s,i,adj,vis);
    }
    int *A=new int[s.size()];
    int i=0;
    while(!s.empty()){
        A[i]=s.top(); i++;
        s.pop();
    }
    return A;
}
