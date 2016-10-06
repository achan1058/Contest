#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k, v, r;
	string s;
	while (cin >> k) {
		getline(cin, s);
		getline(cin, s);
		stringstream ss;
		printf("q(x):");
		ss << s;
		ss >> r;
		while (ss >> v) {
			printf(" %d", r);
			r = r * k + v;
		}
		printf("\nr = %d\n\n", r);
	}
}
