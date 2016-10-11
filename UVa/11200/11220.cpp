#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int N;
	cin >> N;
	getline(cin, s);
	getline(cin, s);
	rep(X, 1, N + 1) {
		printf("%sCase #%d:\n", X > 1 ? "\n" : "", X);
		while (getline(cin, s) && s != "") {
			stringstream ss(s);
			for (int t = 0; ss >> s; t++) {
				if (t < sz(s))
					printf("%c", s[t]);
				else
					t--;
			}
			printf("\n");
		}
	}
}
