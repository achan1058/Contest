#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		vi freq1(26), freq2(26);
		irep(c, s1)
			freq1[c - 'A']++;
		irep(c, s2)
			freq2[c - 'A']++;

		sort(all(freq1));
		sort(all(freq2));
		printf("%s\n", freq1 == freq2 ? "YES" : "NO");
	}
}
