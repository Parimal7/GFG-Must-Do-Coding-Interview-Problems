#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin >> t;
   while(t--) {
       int n;
       cin >> n;
       long long arr[n];
       map<long long, long long> mp;
       for(int i = 0; i < n; ++i) cin >> arr[i];
       stack<int> s;
       s.push(arr[0]);
       for(int i = 1; i < n; ++i) {
           int next = arr[i];
           while(!s.empty() && next > s.top()) {
               mp[s.top()] = next;
               s.pop();
           }
           s.push(next);
       }
       while(!s.empty()) {
           mp[s.top()] = -1;
           s.pop();
       }
       for(int i = 0; i < n; ++i) {
           cout << mp[arr[i]] << " ";
       }
       cout << endl;
   }
}
