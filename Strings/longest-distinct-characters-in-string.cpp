#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        unordered_map<char, int> umap;
        int i = 0;
        int maxCount = 0, count = 0;
        for(int i = 0; i < s.length(); ++i) {
            cout << "Currently at " << s[i] << endl;
            if(umap.find(s[i]) == umap.end()) {
                umap[s[i]] = i;
                count++;
            }
            else {
                maxCount = max(maxCount, count);
                count = 0;
                count++;
                umap[s[i]] = i;
            }
        }
        cout << maxCount << endl;x  
    }
}