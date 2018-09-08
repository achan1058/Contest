#include <bits/stdc++.h>
#include "fraction.h"
#include "header.h"

int main() {
	fi f;
	while (cin >> f && f != fi(1)) {
		fi left, right(1, 0), mid(1);
		while (f != mid) {
			if (f < mid) {
				printf("L");
				right = mid;
				mid = fi(mid.num() + left.num(), mid.den() + left.den());
			} else {
				printf("R");
				left = mid;
				mid = fi(mid.num() + right.num(), mid.den() + right.den());
			}
		}
		print("");
	}
}
