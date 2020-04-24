#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin >> t;
   while(t--) {
       int n; 
       cin >> n;
       int arr[n];
       int ans = -1;
       int sum = 0;
       for(int i = 0; i < n; ++i) {
           cin >> arr[i];
           sum += arr[i];
       }
       int leftSum = 0;
       for(int i = 0; i < n; ++i) {
           sum = sum - arr[i];
           if(leftSum == sum) {
               ans = i+1;
               break;
           }
           leftSum += arr[i];
       }
       cout << ans << endl;
   }
}
