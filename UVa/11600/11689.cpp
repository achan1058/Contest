#include <bits/stdc++.h>
#include "header.h"

int main() {
	int e, f, c;
	forX() {
		cin >> e >> f >> c;
		int result = 0, bottle = e + f;
		while (bottle >= c) {
			int t = bottle / c;
			result += t;
			bottle -= (c - 1) * t;
		}
		printf("%d\n", result);
	}
}
