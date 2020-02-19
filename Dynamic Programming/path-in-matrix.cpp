#include <bits/stdc++.h>
using namespace std;

#define N 20
int grid[N][N];
int cache[N][N];

int possibleX[] = {1, 1, 1};
int possibleY[] = {0, 1, -1};

int findPathSum(int row, int col, int n) {
    if(row == n - 1) return grid[row][col];
    if(cache[row][col] != -1) return cache[row][col];
    int ans = INT_MIN;
    for(int i = 0; i < 3; ++i) {
        int newRow = row + possibleX[i];
        int newCol = col + possibleY[i];
        if(newCol >= 0 && newCol < n)
        ans = max(ans, grid[row][col] + findPathSum(newRow, newCol, n));
    }
    return cache[row][col] = ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) 
                cin >> grid[i][j];
        }
        int ans = INT_MIN;
        memset(cache, -1, sizeof(cache));
        for(int col = 0; col < n; ++col) {
            ans = max(findPathSum(0, col, n), ans);
        }
        cout << ans << endl;
    }
}
