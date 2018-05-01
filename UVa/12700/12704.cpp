#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		double x, y, r;
		cin >> x >> y >> r;
		double d = sqrt(x * x + y * y);
		print("%.2f %.2f", r - d, r + d);
	}
}
