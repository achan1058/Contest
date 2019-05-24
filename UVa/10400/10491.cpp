#include <bits/stdc++.h>
#include "header.h"

int main() {
	double w, c, s;
	while (cin >> w >> c >> s) {
		double p = (w + c - 1) * c / (w + c) / (w + c - s - 1);
		print("%.5f", p);
	}
}
