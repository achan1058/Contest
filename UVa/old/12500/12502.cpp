#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, d;
	forX() {
		cin >> a >> b >> d;
		printf("%d\n", (2 * a - b) * d / (a + b));
	}
}
