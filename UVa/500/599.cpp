#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		vb hit(26);
		int e = 0;
		while (cin >> s && s[0] != '*') {
			hit[s[1] - 'A'] = hit[s[3] - 'A'] = true;
			e++;
		}
		cin >> s;
		int n = (sz(s) + 1) / 2 - e, a = 0;
		for (int i = 0; i < sz(s); i += 2) {
			if (!hit[s[i] - 'A'])
				a++;
		}
		print("There are %d tree(s) and %d acorn(s).", n - a, a);
	}
}
