#include <iostream>
#include <stack>
#include <string>

using namespace std;

char matchingClosingBracket(char openingBracket) {
	if(openingBracket == '[') return ']';
	if(openingBracket == '{') return '}';
	if(openingBracket == '(') return ')';
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		bool flag = true;
		stack<char> myStack;
		for(int i = 0; i < int(s.length()); ++i) {
			if ( s[i] == '{' || s[i] == '[' || s[i] == '(') myStack.push(s[i] );
			else {
				if( !myStack.empty() && s[i] == matchingClosingBracket(myStack.top()) ) 
					myStack.pop();
				else {
					flag = false;
					break;
				}
			}
		}
		if ( myStack.empty() && flag ) cout << "balanced\n";
		else cout << "not balanced\n";
	}
}