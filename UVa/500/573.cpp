#include <bits/stdc++.h>
#include "header.h"

int main() {
	int h, u, d, f;
	while (cin >> h >> u >> d >> f && h != 0) {
		f *= u;
		h *= 100;
		u *= 100;
		d *= 100;

		int day = 0, height = 0;
		bool success = false;
		while (height >= 0) {
			day++;
			height += u;
			u = max(0, u - f);
			if (height > h) {
				success = true;
				break;
			}
			height -= d;
		}
		printf("%s on day %d\n", success ? "success" : "failure", day);
	}
}
