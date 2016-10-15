#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int N, X = 1;
	string s;
	cin >> N;
	getline(cin, s);
	getline(cin, s);
	vi missiles;
	while (X <= N) {
		if (getline(cin, s) && s != "") {
			missiles.pb(stoi(s));
			continue;
		}
		printf("%s", X > 1 ? "\n" : "");
		vi result = lis(missiles);
		printf("Max hits: %d\n", sz(result));
		fori(v, result)
			printf("%d\n", v);

		X++;
		missiles.clear();
	}
}
