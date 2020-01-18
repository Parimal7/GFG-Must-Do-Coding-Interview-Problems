#include <bits/stdc++.h>
using namespace std;

void permute(string prefix, string s) {
    int n = s.length();
    //base case
    if(n == 0) {
        cout << prefix << " ";
    }
    // pick one
    for(int i = 0; i < n; ++i) {
        // choose
        prefix.push_back(s[i]);
        // explore
        permute(prefix, s.substr(0,i) + s.substr(i+1, n-i));
        // unchoose    
        prefix.pop_back();
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        string prefix = "";
        permute(prefix, s);
        cout << endl;
    }
}
