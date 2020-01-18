#include <bits/stdc++.h>
using namespace std;

bool compare(string a,string b) {
    return a.length() < b.length();
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string arr[n];
        for(int i = 0; i < n; ++i) cin >> arr[i];
        sort(arr, arr + n, compare);
        int j = 0;
        bool flag = true;
        while(j <= arr[0].length()) {
            for(int i = 1; i < n; ++i) {
                string s1 = arr[i];
                string s2 = arr[i-1];
                if(s1[j] != s2[j]) {
                    flag = false;
                    break;
                }
            }
            if(flag) j++;
            else break;
        }
        if(j == 0) cout << -1 << endl;
        else {
            string ans = arr[0];
            for(int i = 0; i < j; ++i) {
                cout << ans[i];
            }
            cout << endl;
        }
    }
}
