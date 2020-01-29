#include <bits/stdc++.h>
using namespace std;

bool isValid(int row, int col, int N, int M) {
    return row >= 0 && row < N && col >= 0 && col < M;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        int grid[n][m];
        bool visited[n][m];
        int dist[n][m];
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                visited[i][j] = false;
                dist[i][j] = INT_MAX;
            }
        }
        int destRow, destCol;
        cin >> destRow >> destCol;
        queue<pair<int, int> > bfsQueue;
        dist[0][0] = 0;
        int X[] = {0, 0, 1, -1};
        int Y[] = {1, -1, 0, 0};
        dist[0][0] = 0;
        bfsQueue.push(make_pair(0, 0));
        while(!bfsQueue.empty()) {
            pair<int, int>  currentNode = bfsQueue.front();
            visited[currentNode.first][currentNode.second] = true;
            //cout << "Currently visiting x = " << currentNode.first << " " << "y = " << currentNode.second << endl;
            //cout << "Minimum distance from source = " << dist[currentNode.first][currentNode.second] << endl;
            bfsQueue.pop();
            for(int i = 0; i < 4; ++i) {
                int newRow = currentNode.first + X[i];
                int newCol = currentNode.second + Y[i];
                if(isValid(newRow, newCol, n, m) && grid[newRow][newCol] == 1 && visited[newRow][newCol] == false) {
                    bfsQueue.push(make_pair(newRow, newCol));
                    if(dist[newRow][newCol] > 1 + dist[currentNode.first][currentNode.second]) {
                        dist[newRow][newCol] = 1 + dist[currentNode.first][currentNode.second];
                    }
                }
            }
        }
        if(dist[destRow][destCol] != INT_MAX && grid[0][0] != 0) cout << dist[destRow][destCol] << endl;
        else cout << -1 << endl;
    }
}


