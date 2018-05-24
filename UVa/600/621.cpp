#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		if (s == "1" || s == "4" || s == "78")
			print("+");
		else if (s.substr(sz(s) - 2) == "35")
			print("-");
		else if (s[0] == '9' && s.back() == '4')
			print("*");
		else if (s.substr(0, 3) == "190")
			print("?");
	}
}
