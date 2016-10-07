#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int N;
	string s;
	cin >> N;
	getline(cin, s);

	rep(X, 0, N) {
		getline(cin, s);
		vector<char> v1(all(s)), v2 = v1;
		reverse(all(v2));
		printf("%d\n", sz(lcs(v1, v2)));
	}
}
