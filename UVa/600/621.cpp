#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	string s;
	cin >> N;
	rep(X, 0, N) {
		cin >> s;
		if (s == "1" || s == "4" || s == "78")
			printf("+\n");
		else if (s.substr(sz(s) - 2) == "35")
			printf("-\n");
		else if (s[0] == '9' && s.back() == '4')
			printf("*\n");
		else if (s.substr(0, 3) == "190")
			printf("?\n");
	}
}
