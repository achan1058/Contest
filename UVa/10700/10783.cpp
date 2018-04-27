#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int a, b;
		cin >> a >> b;
		if (a % 2 == 0)
			a++;
		if (b % 2 == 0)
			b--;
		printc("%d", (a + b) * (b - a + 2) / 4);
	}
}
