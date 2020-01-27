#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string newS = s;
    reverse(s.begin(), s.end());
    return newS == s;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.length();
        int maxLen = 0;
        string ans;
        for(int i = 0; i < n; ++i) {
            int currLen = 0;
            string temp = "";
            string temp2;
            for(int j = i; j < n; ++j) {
                temp.push_back(s[j]);
                if(isPalindrome(temp)) {
                    currLen = temp.length();
                    temp2 = temp;
                }
            }
            if(maxLen < currLen) {
                maxLen = currLen;
                ans = temp2;
            }
        }
        cout << ans << endl;
    }
}
