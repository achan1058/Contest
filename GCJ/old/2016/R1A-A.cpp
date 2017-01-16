#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		string s, s1, s2;
		cin >> s;

		while (sz(s) > 0) {
			int large = sz(s) - 1;
			rrep(i, sz(s) - 2, 0) {
				if (s[i] > s[large])
					large = i;
			}

			rrep(i, sz(s) - 1, large + 1)
				s2 += s[i];

			s1 += s[large];
			s.resize(large);
		}

		reverse(all(s2));
		s1 += s2;
		printp("%s\n", s1.c_str());
	}
}
