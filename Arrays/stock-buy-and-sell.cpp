#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i) cin >> arr[i];
        vector<int> buyIndex;
        vector<int> sellIndex;
        for(int i = 0; i < n; ++i) {
            if(i == 0 && arr[i+1] > arr[i]) buyIndex.push_back(i);
            else if(i == n - 1 && arr[i-1] < arr[i]) sellIndex.push_back(i);
            else if(i != 0 && i != n-1 && arr[i] < arr[i-1] && arr[i] < arr[i+1]) buyIndex.push_back(i);
            else if(i != 0 && i != n-1 && arr[i] > arr[i+1] && arr[i] > arr[i-1]) sellIndex.push_back(i);
        }
        if(buyIndex.empty()) cout << "No Profit\n";
        else {
            for(int i = 0; i < buyIndex.size(); ++i) {
            cout << "(" << buyIndex[i] << " " <<  sellIndex[i] << ")" << " ";
            }    
            cout << endl;
        }
    }
}
