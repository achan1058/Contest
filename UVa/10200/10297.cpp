#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll D, V;
	while (cin >> D >> V && (D | V) != 0)
		print("%.3f", pow(D * D * D - 6 * V / M_PI, 1. / 3));
}
