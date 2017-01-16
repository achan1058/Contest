#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, n;
	forX() {
		cin >> m >> n;
		vs dna(m);
		string output;
		read(dna);
		int error = m * n;

		rep(j, 0, n) {
			map<char, int> count;
			rep(i, 0, m)
				count[dna[i][j]]++;

			int best = 0;
			output.pb(' ');
			irep(m, count) {
				if (m.y > best) {
					best = m.y;
					output.back() = m.x;
				}
			}

			error -= best;
		}

		printf("%s\n%d\n", output.c_str(), error);
	}
}
