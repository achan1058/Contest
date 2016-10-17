#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	cin >> N;
	rep(X, 1, N+1) {
		vl a(3);
		cin >> a[0] >> a[1] >> a[2];
		sort(all(a));
		if (a[0] <= 0 || a[0] + a[1] <= a[2])
			printf("Case %d: Invalid\n", X);
		else if (a[0] == a[2])
			printf("Case %d: Equilateral\n", X);
		else if (a[0] == a[1] || a[1] == a[2])
			printf("Case %d: Isosceles\n", X);
		else
			printf("Case %d: Scalene\n", X);
	}
}
