#include <bits/stdc++.h>
using namespace std;

int cache[55];

int find(int totalSteps) {
    if(totalSteps == 0 || totalSteps == 1) return 1;
    else if(totalSteps == 2) return 2;
    if(cache[totalSteps] != -1) return cache[totalSteps];
    else return cache[totalSteps] = find(totalSteps - 1) + find(totalSteps - 2) + find(totalSteps - 3);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int totalSteps;
        cin >> totalSteps;
        memset(cache, -1, sizeof(cache));
        cout << find(totalSteps) << endl;
    }
}

