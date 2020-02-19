#include <bits/stdc++.h>
using namespace std;

int cache[105][105];

int findLcs(string s1, string s2, int n1, int n2) {
    if(n1 < 0 || n2 < 0) return 0;
    if(cache[n1][n2] != -1) return cache[n1][n2];
    if(s1[n1] == s2[n2]) {
        return cache[n1][n2] = 1 + findLcs(s1, s2, n1 - 1, n2 - 1);
    }
    else return cache[n1][n2] = max(findLcs(s1, s2, n1 - 1, n2), findLcs(s1, s2, n1, n2 - 1));
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        memset(cache, -1, sizeof(cache));
        int n1 = s1.length();
        int n2 = s2.length();
        int lcs = findLcs(s1, s2, n1 - 1 , n2 - 1);
        cout << lcs  + (n1 - lcs) + (n2 - lcs) << endl;
    }
}
