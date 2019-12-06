#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n1, n2;
        cin >> n1 >> n2;
        int arr1[n1], arr2[n2];
        for(int i = 0; i < n1; ++i) cin >> arr1[i];
        for(int i = 0; i < n2; ++i) cin >> arr2[i];
        int arr3[n1 + n2];
        int i = 0, j = 0, k = 0;
        while(i < n1 && j < n2) {
            if(arr1[i] < arr2[j] ) {
                arr3[k] = arr1[i];
                i++;
                k++;
            }
            else {
                arr3[k] = arr2[j];
                j++;
                k++;
            }
        }
        while(i < n1 && k < n1 + n2) {
            arr3[k] = arr1[i];
            i++; k++;
        }
        while(j < n2 && k < n1 + n2) {
            arr3[k] = arr2[j];
            j++; k++;
        }
        for(auto x:arr3) cout << x << " ";
        cout << endl;
    }
}