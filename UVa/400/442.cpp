#include <bits/stdc++.h>
#include "header.h"

map<char, int> mapindex;
vector<pii> dim;
string s;
int total, ind;

pii calculate() {
	pii p1, p2;
	if (s[ind] == '(') {
		ind++;
		p1 = calculate();
	} else {
		p1 = dim[mapindex[s[ind]]];
		ind++;
	}

	if (s[ind] == '(') {
		ind++;
		p2 = calculate();
	} else {
		p2 = dim[mapindex[s[ind]]];
		ind++;
	}

	if (p1.y == p2.x)
		total += p1.x * p1.y * p2.y;
	else
		total = inf;

	ind++;

	return{ p1.x, p2.y };
}

int main() {
	char c;
	int n, x, y;
	cin >> n;

	rep(i, 0, n) {
		cin >> c >> x >> y;
		mapindex[c] = i;
		dim.pb({ x, y });
	}

	while (cin >> s) {
		if (sz(s) == 1) {
			printf("0\n");
			continue;
		}

		total = 0;
		ind = 1;
		calculate();
		if (total >= inf)
			printf("error\n");
		else
			printf("%d\n", total);
	}
}
