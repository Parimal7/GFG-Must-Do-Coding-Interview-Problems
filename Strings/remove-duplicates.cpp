#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        while (s.length()==0 ) 
            getline(cin, s);
        
        unordered_map<char, int> hashMap;
        
        for(auto x:s) {
            if(hashMap.find(x) == hashMap.end()) {
                hashMap[x]++;
                cout << x;
            }
        }
        
        cout << endl;
    }
}