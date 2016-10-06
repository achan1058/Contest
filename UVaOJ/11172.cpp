#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, a, b;
	cin >> N;
	rep(X, 0, N) {
		cin >> a >> b;
		if (a < b)
			printf("<\n");
		else if (a > b)
			printf(">\n");
		else
			printf("=\n");
	}
}
