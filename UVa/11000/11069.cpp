#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi v(77);
	v[1] = v[2] = 1;

	rep(i, 3, 77)
		v[i] = v[i - 2] + v[i - 3];

	int n;
	while (cin >> n)
		print("%d", v[n] + v[n - 1]);
}
