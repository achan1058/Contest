#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	string s;
	cin >> N;
	getline(cin, s);
	rep(X, 0, N) {
		getline(cin, s);
		int siz = sqrt(sz(s)) + eps;

		if (siz * siz != sz(s)) {
			printf("INVALID\n");
			continue;
		}

		rep(i, 0, siz)
			rep(j, 0, siz)
			printf("%c", s[i + j * siz]);
		printf("\n");
	}
}
