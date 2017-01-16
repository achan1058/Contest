#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ways(101);
	vi plus = { 1, 2, 12, 15, 35, 40, 70, 77 }, minus = { 5, 7, 22, 26, 51, 57, 92, 100 };
	ways[0] = ways[1] = 1;
	rep(i, 2, 101) {
		irep(v, plus) {
			if (v > i)
				break;
			ways[i] += ways[i - v];
		}
		irep(v, minus) {
			if (v > i)
				break;
			ways[i] -= ways[i - v];
		}
	}
	printf("%d\n", ways[100] - 1);
}
