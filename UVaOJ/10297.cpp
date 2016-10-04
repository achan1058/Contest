#include <bits/stdc++.h>
#include "header.h"

int main() {
	double D, V;
	while (cin >> D >> V && (D != 0 || V != 0))
		printf("%.3f\n", pow(D * D * D - 6 * V / acos(-1), 1. / 3));
}
