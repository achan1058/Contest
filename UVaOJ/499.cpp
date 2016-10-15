#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		map<char, int> freq;
		int mx = 0;
		fori(c, s) {
			if (isalpha(c)) {
				freq[c]++;
				mx = max(mx, freq[c]);
			}
		}

		fori(v, freq) {
			if (v.y == mx)
				printf("%c", v.x);
		}
		printf(" %d\n", mx);
	}
}
