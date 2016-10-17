#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, c, d, L;
	while (cin >> a >> b >> c >> d >> L && (a | b | c | d | L) != 0) {
		int result = 0;
		rep(x, 0, L + 1) {
			int f = a*x*x + b*x + c;
			if (f % d == 0)
				result++;
		}
		printf("%d\n", result);
	}
}
