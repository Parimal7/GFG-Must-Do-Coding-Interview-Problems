#include <bits/stdc++.h>
using namespace std;

int dp[105][105];

int lcs(char* str1, char* str2, int m, int n) {
    if(m == 0 || n == 0) return 0;
    if(dp[m-1][n-1] != -1) return dp[m-1][n-1];
    if(str1[m-1] == str2[n-1]) return dp[m-1][n-1] = 1 + lcs(str1, str2, m-1, n-1);
    else return dp[m-1][n-1] = max(lcs(str1, str2, m-1, n), lcs(str1, str2, m, n-1));
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        memset(dp, -1, sizeof(dp));
        int m, n;
        cin >> m >> n;
        char str1[m+1], str2[n+1];
        cin >> str1 >> str2;
        cout << lcs(str1, str2, m, n) << endl;
    }
}

