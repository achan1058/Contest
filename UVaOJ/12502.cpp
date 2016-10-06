#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, a, b, d;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> a >> b >> d;
		printf("%d\n", (2 * a - b) * d / (a + b));
	}
}
