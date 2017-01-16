#include <bits/stdc++.h>
#include "header.h"

int main() {
	int F, a, b, c;
	forX() {
		int result = 0;
		cin >> F;
		rep(i, 0, F) {
			cin >> a >> b >> c;
			result += a * c;
		}
		printf("%d\n", result);
	}
}
