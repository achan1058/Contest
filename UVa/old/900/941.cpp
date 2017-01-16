#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	string s;
	ll n;
	forX() {
		cin >> s >> n;
		vi count(26);
		irep(c, s)
			count[c - 'a']++;
		drep(i, j, sz(s), 26) {
			if (count[j] > 0) {
				count[j]--;
				ll d = multinomial(count);
				if (n - d < 0) {
					printf("%c", char(j + 'a'));
					break;
				}
				count[j]++;
				n -= d;
			}
		}

		printf("\n");
	}
}
