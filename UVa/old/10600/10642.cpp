#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll x1, y1, x2, y2;
	forX() {
		cin >> x1 >> y1 >> x2 >> y2;
		ll len = 0;
		if (x1 + y1 < x2 + y2) {
			len += y1 + 1;
			y1 = x1 + y1 + 1;
			x1 = 0;
		}
		if (x1 + y1 < x2 + y2) {
			len += x2;
			y2 = x2 + y2;
			x2 = 0;
		}
		len += (x1 + y1 < x2 + y2 ? (y2 - y1) * (y2 + y1 + 1) / 2 : x2 - x1);
		printc("%d\n", len);
	}
}