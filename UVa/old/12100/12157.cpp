#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	forX() {
		cin >> n;
		int mile = 0, juice = 0;
		rep(i, 0, n) {
			cin >> v;
			mile += v / 30 * 10 + 10;
			juice += v / 60 * 15 + 15;
		}

		if (mile < juice)
			printc("Mile %d\n", mile);
		else if (mile > juice)
			printc("Juice %d\n", juice);
		else
			printc("Mile Juice %d\n", juice);
	}
}
