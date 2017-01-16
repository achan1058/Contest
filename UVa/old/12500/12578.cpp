#include <bits/stdc++.h>
#include "header.h"

int main() {
	double d, ans1, ans2;
	forX() {
		cin >> d;
		ans1 = d * d / 25 * M_PI;
		ans2 = d * d / 5 * 3 - ans1;
		printf("%.2f %.2f\n", ans1, ans2);
	}
}
