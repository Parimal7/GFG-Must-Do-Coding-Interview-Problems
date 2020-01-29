#include <bits/stdc++.h>
using namespace std;

bool visited[25][25];
int grid[25][25];

bool isSafe(int row, int col, int N) {
    return row >= 0 && row < N && col >= 0 && col < N;
}

void dfs(int row, int col, int N, int grid[][25]) {
   // cout << row << " " << col << endl;
    visited[row][col] = true;
    int X[] = {0, 0, 1, -1};
    int Y[] = {1, -1, 0, 0};
    for(int i = 0; i < 4; ++i) {
        int newRow = row + X[i];
        int newCol = col + Y[i];
        if(isSafe(newRow, newCol, N) && visited[newRow][newCol] == false && (grid[newRow][newCol] == 3 || grid[newRow][newCol] == 2)) {
            dfs(newRow, newCol, N, grid);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        int sourceRow, sourceCol, destRow, destCol;
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                cin >> grid[i][j];
                visited[i][j] = 0;
                if(grid[i][j] == 1) {
                    sourceRow = i;
                    sourceCol = j;
                }
                if(grid[i][j] == 2) {
                    destRow = i;
                    destCol = j;
                }
            }
            
        }
        //grid[destRow][destCol] = 3;
        dfs(sourceRow, sourceCol, N, grid);
        if(visited[destRow][destCol] == true) cout << 1 << endl;
        else cout << 0 << endl;
    }
}
