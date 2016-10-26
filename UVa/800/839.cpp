#include <bits/stdc++.h>
#include "header.h"

bool good;
ll checkMobile() {
	ll wl, dl, wr, dr;
	cin >> wl >> dl >> wr >> dr;
	if (wl == 0)
		wl = checkMobile();
	if (wr == 0)
		wr = checkMobile();
	if (wl * dl != wr * dr)
		good = false;
	return wl + wr;
}

int main() {
	forX() {
		good = true;
		checkMobile();
		if (good)
			printX("YES\n");
		else
			printX("NO\n");
	}
}
