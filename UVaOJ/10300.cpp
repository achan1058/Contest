#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, F, a, b, c;
	cin >> N;
	rep(X, 0, N) {
		int result = 0;
		cin >> F;
		rep(i, 0, F) {
			cin >> a >> b >> c;
			result += a * c;
		}
		printf("%d\n", result);
	}
}
