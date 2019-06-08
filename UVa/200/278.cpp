#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		char t;
		int r, c;
		cin >> t >> r >> c;
		if (t == 'r' || t == 'Q')
			printv(min(r, c));
		else if (t == 'K')
			printv(((r + 1) / 2) * ((c + 1) / 2));
		else if (t == 'k')
			printv((r * c + 1) / 2);
	}
}
