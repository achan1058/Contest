#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	cin >> N;
	rep(X, 0, N) {
		string s;
		cin >> s;
		sort(all(s));
		do {
			printf("%s\n", s.c_str());
		} while (next_permutation(all(s)));
		printf("\n");
	}
}
