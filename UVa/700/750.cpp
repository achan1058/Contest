#include <bits/stdc++.h>
#include "header.h"

bool isGood(const vi& queens) {
	drep(i, j, 8, i) {
		if (i - j == abs(queens[i] - queens[j]))
			return false;
	}
	return true;
}

int main() {
	vi queens = { 1, 2, 3, 4, 5, 6, 7, 8 };
	vvi solutions;
	do {
		if (isGood(queens))
			solutions.pb(queens);
	} while (next_permutation(all(queens)));

	forX() {
		int r, c, t = 1;
		cin >> r >> c;
		printX("SOLN       COLUMN");
		print(" #      1 2 3 4 5 6 7 8\n");
		irep(sol, solutions) {
			if (sol[c - 1] == r) {
				printf("%2d      ", t);
				print(sol);
				t++;
			}
		}
	}
}
