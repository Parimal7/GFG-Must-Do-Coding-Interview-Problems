#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; 
    while(t--) {
        int n; cin >> n; 
        int arr[n];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int i = 0, j = n - 1;
        while(i < j) {
            cout << arr[j] << " " << arr[i] << " ";
            j--;
            i++;
        } 
        if(n%2) cout << arr[i];
        cout << endl;
    }
}