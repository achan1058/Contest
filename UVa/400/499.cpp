#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		map<char, int> count;
		int best = 0;
		irep(c, s) {
			if (isalpha(c)) {
				count[c]++;
				best = max(best, count[c]);
			}
		}
		irep(c, count) {
			if (c.second == best)
				printf("%c", c.first);
		}
		print(" %d", best);
	}
}
