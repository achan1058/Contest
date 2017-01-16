#include <bits/stdc++.h>
#include "header.h"

string construct(char c, int d) {
	if (d == 0)
		return string(1, c);
	string s1, s2;
	if (c == 'R') {
		s1 = construct('R', d - 1);
		s2 = construct('S', d - 1);
	} else if (c == 'S') {
		s1 = construct('S', d - 1);
		s2 = construct('P', d - 1);
	} else if (c == 'P') {
		s1 = construct('P', d - 1);
		s2 = construct('R', d - 1);
	}

	return s1 < s2 ? s1 + s2 : s2 + s1;
}

int main() {
	int n, p, r, s;
	forX() {
		cin >> n >> r >> p >> s;
		string init = "RPS", ans = "Z";
		irep(c, init) {
			string tour = construct(c, n);
			int ri = 0, pi = 0, si = 0;

			irep(t, tour) {
				if (t == 'R')
					ri++;
				else if (t == 'P')
					pi++;
				else if (t == 'S')
					si++;
			}
			if (ri == r && pi == p && si == s) {
				if (tour < ans)
					ans = tour;
			}
		}

		if (ans == "Z")
			printp("IMPOSSIBLE\n");
		else
			printp("%s\n", ans.c_str());
	}
}
