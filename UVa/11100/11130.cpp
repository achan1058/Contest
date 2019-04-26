#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, v, d, s;
	while (cin >> a >> b >> v >> d >> s && (a | b | v | d | s) != 0) {
		double dist = s * v / 2., rad = d * M_PI / 180, da = dist * cos(rad) + a / 2., db = dist * sin(rad) + b / 2.;
		print("%d %d", int((da + eps) / a), int((db + eps) / b));
	}
}
