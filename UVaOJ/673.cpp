#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	string s;
	cin >> N;
	getline(cin, s);
	rep(X, 0, N) {
		getline(cin, s);
		stack<char> st;
		bool good = true;

		fori(c, s) {
			if (c == '(' || c == '[')
				st.push(c);
			else if (!st.empty() && ((c == ')' && st.top() == '(') || (c == ']' && st.top() == '[')))
				st.pop();
			else {
				good = false;
				break;
			}
		}
		printf("%s\n", good && st.empty() ? "Yes" : "No");
	}
}
