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
	int N;
	cin >> N;

	rep(X, 0, N) {
		good = true;
		checkMobile();

		if (X > 0)
			printf("\n");
		if (good)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
