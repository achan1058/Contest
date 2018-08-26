#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		double d, v, u;
		cin >> d >> v >> u;
		if (v == 0 || u - v <= eps) {
			printc("can't determine");
			continue;
		}
		v = sqrt(u * u - v * v);
		printc("%.3f", d / v - d / u);
	}
}
