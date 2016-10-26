#include <bits/stdc++.h>
#include "header.h"

bool eval_queens(const vi& q) {
	rep(i, 0, 8) {
		rep(j, i + 1, 8) {
			if (abs(q[j] - q[i]) == j - i)
				return false;
		}
	}
	return true;
}

int main() {
	vi queens = { 1, 2, 3, 4, 5, 6, 7, 8 };
	vvi solutions;
	do {
		if (eval_queens(queens))
			solutions.pb(queens);
	} while (next_permutation(all(queens)));

	forX() {
		int r, c, sol_num = 0;
		cin >> r >> c;
		c--;
		printX("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		irep(sol, solutions) {
			if (sol[c] == r) {
				sol_num++;
				printf("%2d     ", sol_num);
				rep(j, 0, 8)
					printf(" %d", sol[j]);

				printf("\n");
			}
		}
	}
}
