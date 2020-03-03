#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n-1];
        bool arr2[n] = {0};
        for(int i = 0; i < n-1; ++i) {
            cin >> arr[i];
            arr2[arr[i] - 1] = 1;
        }
        for(int i = 0; i < n; ++i) {
            if(!arr2[i]) cout << i + 1 << endl;
        }
    }
}
