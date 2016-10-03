#include <bits/stdc++.h>
#include "header.h"

void process(const string& s1, const string& s2, int& i1, int& i2, int& r, int s = 32) {
	if (s1[i1] == 'p' || s2[i2] == 'p') {
		int d1 = 0, d2 = 0;

		if (s1[i1] == 'p')
			d1 = 1;
		if (s2[i2] == 'p')
			d2 = 1;
		rep(i, 0, 4) {
			i1 += d1;
			i2 += d2;
			process(s1, s2, i1, i2, r, s / 2);
		}
	} else if (s1[i1] == 'f' || s2[i2] == 'f') {
		r += s * s;
		return;
	} else {
		return;
	}
}

int main() {
	int N, i1, i2, r;
	string s1, s2;
	cin >> N;
	rep(X, 0, N) {
		cin >> s1 >> s2;
		i1 = i2 = r = 0;
		process(s1, s2, i1, i2, r);
		printf("There are %d black pixels.\n", r);
	}
}
