#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, h, n;
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
		cin >> n >> h;
		string s(n, '0');
		rep(i, n - h, n)
			s[i] = '1';
		do {
			printf("%s\n", s.c_str());
		} while (next_permutation(all(s)));
	}
}
