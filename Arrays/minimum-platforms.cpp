#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arrival[n], departure[n];
        vector<pair<int, char> > mp;
        for(int i = 0; i < n; ++i) {
            cin >> arrival[i];
            mp.push_back(make_pair(arrival[i], 'A'));
        }
        for(int i = 0; i < n; ++i) {
            cin >> departure[i];
            mp.push_back(make_pair(departure[i], 'D'));
        }
        sort(mp.begin(), mp.end());
        int totalMax = 0, currPlat = 0;
        for(auto x:mp) {
            if(x.second == 'A') currPlat++;
            else currPlat--;
            totalMax = max(totalMax, currPlat);
        }
        cout << totalMax << endl;
    }
}