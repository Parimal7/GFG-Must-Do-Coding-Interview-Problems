#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int maxCount = 0, maxElement;
        int count = 1;
        for(int i = 0; i < n; ++i) {
            if(arr[i] == arr[i+1]) count++;
            else {
                if(count > maxCount) {
                    maxElement = arr[i];
                    maxCount = count;
                }
                count = 1;
            }
        }
        if(maxCount > n/2) cout << maxElement << endl;
        else cout << -1 << endl;
    }
}