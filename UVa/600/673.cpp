#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		getline(cin, s);
		string remain;
		bool good = true;
		irep(c, s) {
			if (c == '(' || c == '[') {
				remain.pb(c);
			} else if (c == ']') {
				if (remain.empty() || remain.back() != '[') {
					good = false;
					break;
				}
				remain.pop_back();
			} else if (c == ')') {
				if (remain.empty() || remain.back() != '(') {
					good = false;
					break;
				}
				remain.pop_back();
			}
		}
		print(good && remain.empty() ? "Yes" : "No");
	}
}
