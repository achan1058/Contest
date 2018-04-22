#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int a, b;
		cin >> a >> b;
		if (!(a % 2))
			a++;
		if (!(b % 2))
			b--;
		int avg = (a + b) / 2, num = (b - a) / 2 + 1;
		printc("%d\n", avg * num);
	}
}
