#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	string s;
	cin >> N;
	rep(X, 0, N) {
		cin >> s;
		sort(all(s), [&](char c1, char c2) { return tolower(c1) < tolower(c2) || (tolower(c1) == tolower(c2) && c1 < c2); });
		do {
			printf("%s\n", s.c_str());
		} while (next_permutation(all(s), [&](char c1, char c2) { return tolower(c1) < tolower(c2) || (tolower(c1) == tolower(c2) && c1 < c2); }));
	}
}
