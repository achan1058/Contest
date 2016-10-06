#include <bits/stdc++.h>
#include "header.h"

vi dolls;
bool good;
int backtrack(int d = 0) {
	if (!good || sz(dolls) < d + 2 || dolls[d] > 0) {
		good = false;
		return inf;
	}

	int remain = -dolls[d], cur = -dolls[d];
	d++;
	while (d < sz(dolls) && dolls[d] < 0) {
		remain += dolls[d];
		if (remain <= 0) {
			good = false;
			return inf;
		}
		d = backtrack(d);
	}

	if (d < sz(dolls) && dolls[d] != cur) {
		good = false;
		return inf;
	}

	return d + 1;
}

int main() {
	int v;
	string s;
	while (getline(cin, s)) {
		stringstream ss;
		dolls.clear();
		ss << s;
		while (ss >> v)
			dolls.push_back(v);

		good = true;
		int d = backtrack();
		printf("%s\n", (d == sz(dolls) && good) ? ":-) Matrioshka!" : ":-( Try again.");
	}
}
