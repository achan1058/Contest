#include <bits/stdc++.h>
#include "triangle.h"

int main() {
	double f, A = 108 * M_PI / 180, F = 63 * M_PI / 180;
	while (cin >> f)
		printf("%.10f\n", sinLawSide(A, f, F));
}
