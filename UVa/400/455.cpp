#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int N;
	string s;
	cin >> N;
	rep(X, 0, N) {
		cin >> s;
		printf("%s%d\n", X > 0 ? "\n" : "", kmp(s + s, s)[1]);
	}
}
