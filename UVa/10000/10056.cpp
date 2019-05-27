#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, k;
		double d;
		cin >> n >> d >> k;
		if (d == 0)
			print("0.0000");
		else
			print("%.4f", d * pow(1 - d, k - 1) / (1 - pow(1 - d, n)));
	}
}
