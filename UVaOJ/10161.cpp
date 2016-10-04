#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int t = int(sqrt(n) - eps) + 1, j = n - (t - 1)*(t - 1);
		bool bigger = false;
		if (j > t) {
			j = 2 * t - j;
			bigger = true;
		}
		if ((t % 2 == 0 && bigger) || (t % 2 == 1 && !bigger))
			swap(t, j);
		printf("%d %d\n", j, t);
	}
}
