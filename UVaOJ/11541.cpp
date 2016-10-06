#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	string s;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> s;
		stringstream ss;
		ss << s;
		char c;
		int n;
		printf("Case %d: ", X);
		while (ss >> c) {
			ss >> n;
			rep(i, 0, n)
				printf("%c", c);
		}
		printf("\n");
	}
}
