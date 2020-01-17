#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int dp[26];
        memset(dp, -1, sizeof(dp));
        dp[s[0] - 'a'] = 0;
        int maxLen = 1, currLen = 1, prevIndex;
        for(int i = 1; i < int(s.length()); ++i) {
            prevIndex = dp[s[i] - 'a'];
            // if the current character is not a part of substring
            if(prevIndex == -1 || i - currLen > prevIndex) 
                currLen++;
            else {
                maxLen = max(maxLen, currLen);
                currLen = i - prevIndex;
            }
            dp[s[i] - 'a'] = i;
        }
        maxLen = max(maxLen, currLen);
        cout << maxLen << endl;
    }
}
