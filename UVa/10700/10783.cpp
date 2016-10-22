#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b;
	forX() {
		cin >> a >> b;
		if (a % 2 == 0)
			a++;
		if (b % 2 == 0)
			b--;
		printc("%d\n", (a + b) * (b - a + 2) / 4);
	}
}
