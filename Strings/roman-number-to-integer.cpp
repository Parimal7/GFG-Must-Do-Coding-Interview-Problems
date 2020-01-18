#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int res = 0;
    	for (int i = s.length() - 1; i >= 0; i--) {
	    	char c = s[i];
		    switch (c) {
		    case 'I':
			    res += (res >= 5 ? -1 : 1);
			    break;
		    case 'V':
    			res += 5;
	    		break;
		    case 'X':
			    res += 10 * (res >= 50 ? -1 : 1);
			    break;
		    case 'L':
			    res += 50;
			    break;
		    case 'C':
			    res += 100 * (res >= 500 ? -1 : 1);
			    break;
		    case 'D':
			    res += 500;
			    break;
		    case 'M':
			    res += 1000;
			    break;
	    	}
	    }
	    cout << res << endl;
    }
}
