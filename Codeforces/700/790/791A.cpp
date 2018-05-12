#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, years = 0;
	cin >> a >> b;
	while (a <= b) {
		a *= 3;
		b *= 2;
		years++;
	}
	print("%d", years);
}
