#include <bits/stdc++.h>
#include "floodfill.h"

bool rule(int& curg, int& newg, int source, int target, int& curv, int& newv, bool first) {
	if (first)
		curg = -1;
	else if (newg < inf)
		return false;
	newg = curg + 1;
	return true;
}

int main() {
	int r, c, nr, cr, nc, cc;
	while (cin >> r >> c && (r | c) != 0) {
		vvi board = mi(r, c, inf);
		cin >> nr;
		rep(i, 0, nr) {
			cin >> cr >> nc;
			rep(j, 0, nc) {
				cin >> cc;
				board[cr][cc] = -1;
			}
		}
		cin >> nr >> nc >> cr >> cc;
		printf("%d\n", floodfill(board, nr, nc, 0, vi({ 1, 0, -1, 0 }), vi({ 0, 1, 0, -1 }), cr, cc, rule));
	}
}
