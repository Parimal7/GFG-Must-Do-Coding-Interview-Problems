#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1.length() != s2.length()) cout << "NO\n";
        bool flag = true;
        else {
            for(int i = 0; i < s1.length(); ++i) {
                if(s1[i] != s2[i]) {
                    flag = false;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}