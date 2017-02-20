#include <bits/stdc++.h>
#include "header.h"

int main() {
	int total = 0;
	forX() {
		double l, w, d, m;
		cin >> l >> w >> d >> m;
		if (((l > 56 || w > 45 || d > 25) && l + w + d > 125) || m > 7) {
			printf("0\n");
		} else {
			printf("1\n");
			total++;
		}
	}
	printf("%d\n", total);
}
