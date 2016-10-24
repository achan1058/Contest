#include <bits/stdc++.h>
#include "header.h"

int main() {
	int x, y, r;
	forX() {
		cin >> x >> y >> r;
		double d = sqrt(x * x + y * y);
		printf("%.2f %.2f\n", r - d, r + d);
	}
}
