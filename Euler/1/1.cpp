#include <bits/stdc++.h>
#include "header.h"

int main() {
	int sum = 0;
	rep(n, 1, 1000) {
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	printf("%d\n", sum);
}
