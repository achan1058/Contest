#include <bits/stdc++.h>
#include "header.h"

int main() {
	pii f;
	while (cin >> f.x >> f.y && f.x * f.y != 1) {
		pii left = { 0, 1 }, right = { 1, 0 }, mid = { 1, 1 };
		while (f != mid) {
			if (f.x * mid.y > mid.x * f.y) {
				left = mid;
				printf("R");
			} else {
				right = mid;
				printf("L");
			}
			mid = { left.x + right.x, left.y + right.y };
		}
		printf("\n");
	}
}
