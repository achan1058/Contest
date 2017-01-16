#include <bits/stdc++.h>
#include "header.h"

int main() {
	double d;
	while (cin >> d && d != 0) {
		int a = int(pow(d, 1. / 3) + eps);
		d = (d - a * a * a) / 3 / a / a;
		printf("%.4f\n", a + d);
	}
}
