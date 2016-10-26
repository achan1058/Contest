#include <bits/stdc++.h>
#include "header.h"

int main() {
	int x, y;
	forX() {
		cin >> x >> y;
		if (x == y) {
			if (x % 2 == 0)
				printf("%d\n", 2 * x);
			else
				printf("%d\n", 2 * x - 1);
		} else if (x == y + 2) {
			if (x % 2 == 0)
				printf("%d\n", 2 * x - 2);
			else
				printf("%d\n", 2 * x - 3);
		} else {
			printf("No Number\n");
		}
	}
}
