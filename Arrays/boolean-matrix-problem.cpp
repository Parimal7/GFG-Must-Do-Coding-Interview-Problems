#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int r,c;
        cin >> r >> c;
        int matrix[r][c];
        set<int> rowSet;
        set<int> colSet;
        for(int row = 0; row < r; ++row) {
            for(int col = 0; col < c; ++col) {
                cin >> matrix[row][col];
                if(matrix[row][col]) {
                    rowSet.insert(row);
                    colSet.insert(col);
                }
            }
        }
        for(int row = 0; row < r; ++row) {
            for(int col = 0; col < c; ++col) {
                if(rowSet.count(row) || colSet.count(col)) cout << 1 << " ";
                else cout << 0 << " ";
            }
            cout << endl;
        }
    }
}