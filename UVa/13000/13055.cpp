#include <bits/stdc++.h>
#include "header.h"

int main() {
	stack<string> st;
	string s, name;
	forX() {
		cin >> s;
		if (s == "Sleep") {
			cin >> name;
			st.push(name);
		} else if (s == "Test") {
			if (st.empty())
				print("Not in a dream");
			else
				printv(st.top());
		} else if (!st.empty()) {
			st.pop();
		}
	}
}
