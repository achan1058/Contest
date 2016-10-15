#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	while (cin >> n >> k) {
		vb arr(n + 1);
		vi values(k);
		fori(v, values)
			cin >> v;
		rep(i, 1, n + 1) {
			fori(v, values) {
				if (i - v >= 0)
					arr[i] = (arr[i] || !arr[i - v]);
			}
		}
		printf("%s wins\n", arr[n] ? "Stan" : "Ollie");
	}
}
