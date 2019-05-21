#include <bits/stdc++.h>
#include "triangle.h"
#include "header.h"

int main() {
	double f, A = 108 * M_PI / 180, B = 63 * M_PI / 180;
	while (cin >> f)
		print("%.10f", sinLawSide(A, f, B));
}
