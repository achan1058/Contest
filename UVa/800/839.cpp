#include <bits/stdc++.h>
#include "header.h"

int recurse(bool& good) {
	int wl, dl, wr, dr;
	cin >> wl >> dl >> wr >> dr;
	if (wl == 0)
		wl = recurse(good);
	if (wr == 0)
		wr = recurse(good);
	good &= wl * dl == wr * dr;
	return wl + wr;
}

int main() {
	forX() {
		bool good = true;
		recurse(good);
		printX("%s\n", good ? "YES" : "NO");
	}
}
