#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b;
	while (cin >> a >> b && a != -1) {
		int d1 = (b - a + 100) % 100;
		int d2 = (a - b + 100) % 100;
		print("%d", min(d1, d2));
	}
}
