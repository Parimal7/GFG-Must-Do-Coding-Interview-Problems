#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int V;
        cin >> V;
        int matrix[V][V];
        int dp[V][V];
        for(int i = 0; i < V; ++i) {
            for(int j = 0; j < V; ++j) {
                cin >> matrix[i][j];
                dp[i][j] = matrix[i][j];
            }
        }
        for(int k = 0; k < V; ++k) {
            for(int i = 0; i < V; ++i) {
                for(int j = 0; j < V; ++j) {
                    if(dp[i][k] + dp[k][j] < dp[i][j]) 
                    dp[i][j] = dp[i][k] + dp[k][j];
                }
            }
        }
        for(int i = 0; i < V; ++i) {
            for(int j = 0; j < V; ++j) {
                if(dp[i][j] != 1e7) cout << dp[i][j] << " ";
                else cout << "INF ";
            }
            cout << endl;
        }
    }
}
