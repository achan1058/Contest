#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		vi num(10);
		rep(i, 1, n + 1) {
			int t = i;
			while (t > 0) {
				num[t % 10]++;
				t /= 10;
			}
		}
		rep(i, 0, 10)
			printf("%s%d", i > 0 ? " " : "", num[i]);
		printf("\n");
	}
}
