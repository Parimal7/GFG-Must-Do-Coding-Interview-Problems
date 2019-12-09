#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int i = 0, j = 0;
        while(j <= s.length()) {
            if(s[j] == '.' || j == s.length()) {
                reverse(s.begin() + i, s.begin() + j);
                i = j + 1;
            }
            j++;
        }
       reverse(s.begin(), s.end());
        cout << s << endl;
    }
}