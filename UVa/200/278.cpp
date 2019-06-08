#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		char t;
		int r, c;
		cin >> t >> r >> c;
		if (t == 'r' || t == 'Q')
			printd(min(r, c));
		else if (t == 'K')
			printd(((r + 1) / 2) * ((c + 1) / 2));
		else if (t == 'k')
			printd((r * c + 1) / 2);
	}
}
