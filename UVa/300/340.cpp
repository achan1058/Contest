#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vi secret(n), guess(n);
		read(secret);
		print("Game %d:", X);

		map<int, int> sm;
		irep(s, secret)
			sm[s]++;
		while (read(guess) && guess[0] != 0) {
			map<int, int> gm;
			irep(g, guess)
				gm[g]++;
			int black = 0, total = 0;
			rep(i, 0, n) {
				if (secret[i] == guess[i])
					black++;
			}
			rep(i, 1, 10)
				total += min(sm[i], gm[i]);
			print("    (%d,%d)", black, total - black);
		}
	}
}
