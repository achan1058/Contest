#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, r;
	whileX(cin >> n >> r && (n | r) != 0) {
		int d = (n - 1) / r;
		if (d <= 26)
			printc(d);
		else
			printc("impossible");
	}
}
