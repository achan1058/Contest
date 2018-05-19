#include <bits/stdc++.h>
#include "header.h"

int main() {
	int h, u, d, f;
	while (cin >> h >> u >> d >> f && h != 0) {
		h *= 100;
		d *= 100;
		int snail = 0, day = 0, power = 100;
		do {
			day++;
			snail += u * power;
			if (snail > h)
				break;
			snail -= d;
			if (snail < 0)
				break;
			power = max(power - f, 0);
		} while (true);
		print("%s on day %d", snail > 0 ? "success" : "failure", day);
	}
}
