#include <bits/stdc++.h>
using namespace std;

int memo[110][110];

int solve(string &s1,string &s2,int n1,int n2){

if(n1<0 || n2<0)
return 0;

if(memo[n1][n2] != -1)
return memo[n1][n2];

bool flag = 0;
int res1 = 0,res2=0,res3=0;
if(s1[n1] == s2[n2]){
flag = 1;
res1 = 1 + solve(s1,s2,n1-1,n2-1);
}

res2 = solve(s1,s2,n1-1,n2);
res3 = solve(s1,s2,n1,n2-1);

int res = 0;
if(flag == 0)
res = 0;
else
res = max(res1,max(res2,res3));

memo[n1][n2] = res;
return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n1, n2;
        cin >> n1 >> n2;
        string s1, s2;
        cin >> s1 >> s2;
        memset(memo,-1,sizeof(memo));
        cout << solve(s1, s2, n1, n2) << endl;
    }
}

