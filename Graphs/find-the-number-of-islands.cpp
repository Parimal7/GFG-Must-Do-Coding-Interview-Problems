bool visited[55][55];

bool isSafe(int i, int j, int N, int M) {
    return i >= 0 && i < N && j >= 0 && j < M;
}

void dfs(int i, int j, vector<int> A[], int N, int M) {
    int row[] = {1, 0, -1, 0, -1, 1, -1, 1};
    int col[] = {0, 1, 0, -1, -1, 1, 1, -1};
    visited[i][j] = true;
    for(int k = 0; k < 8; ++k) {
        int newRow = i + row[k];
        int newCol = j + col[k];
        if(isSafe(newRow, newCol, N, M) && visited[newRow][newCol] == false && A[newRow][newCol] == 1) {
            dfs(newRow, newCol, A, N, M);
        }
    }
}


int findIslands(vector<int> A[], int N, int M)
{
    int count = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            visited[i][j] = false;
        }
    }
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            if(visited[i][j] == false && A[i][j] == 1) {
                dfs(i, j, A, N, M);
                count++;
            }
        }
    }
    return count;
}
