#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	if (n <= 2)
		printf("-1\n");
	else {
		printf("100 99");
		rep(i, 0, n - 2)
			printf(" %d", i + 1);
		printf("\n");
	}
}
