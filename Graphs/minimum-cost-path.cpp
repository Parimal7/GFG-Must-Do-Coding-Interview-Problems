#include <bits/stdc++.h>
using namespace std;

bool isValid(int row, int col, int N, int M) {
    return row >= 0 && row < N && col >= 0 && col < M;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int grid[n][n];
        bool visited[n][n];
        int dist[n][n];
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cin >> grid[i][j];
                visited[i][j] = false;
                dist[i][j] = INT_MAX;
            }
        }
        set<pair< int, pair<int, int> > > bfsQueue; // <distance, <x,y> > 
        dist[0][0] = grid[0][0];
        bfsQueue.insert(make_pair(dist[0][0], make_pair(0,0)));
        int X[] = {0, 0, 1, -1};
        int Y[] = {1, -1, 0, 0};
        while(!bfsQueue.empty()) {
            int distanceFromSource = bfsQueue.begin()->first;
            int currentX = bfsQueue.begin()->second.first;
            int currentY = bfsQueue.begin()->second.second;
           // cout << "Processing X = " << currentX << " Y = " << currentY << " with distacne from source = " << distanceFromSource << endl;
            bfsQueue.erase(bfsQueue.begin());
            for(int i = 0; i < 4; ++i) {
                int newRow = currentX + X[i];
                int newCol = currentY + Y[i];
                if(isValid(newRow, newCol, n, n)) {
                    if(dist[newRow][newCol] > grid[newRow][newCol] + distanceFromSource) {
                    if(dist[newRow][newCol] != INT_MAX) bfsQueue.erase(bfsQueue.find( make_pair(dist[newRow][newCol], make_pair(newRow, newCol))));    
                    dist[newRow][newCol] = grid[newRow][newCol] + distanceFromSource;
                    bfsQueue.insert(make_pair(dist[newRow][newCol], make_pair(newRow, newCol)));
                    }
                }
            }
        }
        cout << dist[n-1][n-1] << endl;
        
    }
}
