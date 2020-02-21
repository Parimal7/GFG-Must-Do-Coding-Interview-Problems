#include <bits/stdc++.h>
using namespace std;

int findCount(int n, int k) {
    if(k == 0 || k == 1 || n == 1) return k;
    return max(findCount(n, k - 1), findCount(n - 1, k + 1));
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; // number of eggs
        int k; // number of floors
        cin >> n >> k;
        cout << findCount(n, k) << endl;
    }
}

