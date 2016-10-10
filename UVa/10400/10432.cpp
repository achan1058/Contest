#include <bits/stdc++.h>
#include "triangle.h"

int main() {
	int n;
	double r;
	while (cin >> r >> n)
		printf("%.3f\n", sas_area(2 * M_PI / n, r, r) * n);
}
