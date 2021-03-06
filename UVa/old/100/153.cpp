#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	string s;
	while (cin >> s && s != "#") {
		vi count(26);
		ll ans = 0;
		irep(c, s)
			count[c - 'a']++;
		irep(c, s) {
			rep(j, 0, c - 'a') {
				if (count[j] > 0) {
					count[j]--;
					ans += multinomial(count);
					count[j]++;
				}
			}
			count[c - 'a']--;
		}
		printf("%10lld\n", ans + 1);
	}
}
