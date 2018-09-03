#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		char t;
		int r, c;
		cin >> t >> r >> c;
		if (t == 'r' || t == 'Q')
			print("%d", min(r, c));
		else if (t == 'K')
			print("%d", ((r + 1) / 2) * ((c + 1) / 2));
		else if (t == 'k')
			print("%d", (r * c + 1) / 2);
	}
}
