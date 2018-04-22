#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		int mx = 0;
		map<char, int> counter;
		irep(c, s) {
			if (isalpha(c)) {
				counter[c]++;
				mx = max(mx, counter[c]);
			}
		}

		irep(p, counter) {
			if (p.y == mx && isalpha(p.x))
				printf("%c", p.x);
		}
		printf(" %d\n", mx);
	}
}
