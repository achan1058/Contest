#include <bits/stdc++.h>
#include "header.h"

int main() {
	int ans = 0, a, b, c;
	forX() {
		cin >> a >> b >> c;
		if (a + b + c >= 2)
			ans++;
	}
	printf("%d\n", ans);
}
