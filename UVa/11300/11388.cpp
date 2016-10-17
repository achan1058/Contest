#include <bits/stdc++.h>
#include "header.h"

int main() {
	int g, l, N;
	cin >> N;
	rep(X, 0, N) {
		cin >> g >> l;
		if (l % g != 0)
			printf("-1\n");
		else
			printf("%d %d\n", g, l);
	}
}
