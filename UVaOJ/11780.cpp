#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		if (n % 5 == 0)
			printf("0.00\n");
		else if (n % 5 == 1 || n % 5 == 4)
			printf("0.40\n");
		else if (n % 5 == 2 || n % 5 == 3)
			printf("0.20\n");
	}
}
