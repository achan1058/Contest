#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi arr(9);
	while (read(arr), cin) {
		bool first = true;
		rep(i, 0, 9) {
			if (arr[i] == 0)
				continue;
			if (!first) {
				if (arr[i] > 0)
					printf(" + ");
				else
					printf(" - ");
			} else if (arr[i] < 0)
				printf("-");
			if (abs(arr[i]) != 1 || i == 8)
				printf("%d", abs(arr[i]));
			if (i < 8)
				printf("x");
			if (i < 7)
				printf("^%d", 8 - i);

			first = false;
		}
		printf("%s\n", first ? "0" : "");
	}
}
