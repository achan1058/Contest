#include <bits/stdc++.h>
#include "header.h"

int main() {
	double d, v, u;
	forX() {
		cin >> d >> v >> u;
		if (u <= v + eps || v == 0) {
			printc("can't determine\n");
			continue;
		}
		double t1 = d / u, t2 = d / sqrt(u * u - v * v);
		printc("%.3lf\n", t2 - t1);
	}
}
