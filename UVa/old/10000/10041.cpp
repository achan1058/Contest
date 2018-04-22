#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, total = 0;
		cin >> n;
		vi loc(n);
		read(loc);
		sort(all(loc));
		irep(v, loc)
			total += abs(v - loc[n / 2]);
		printf("%d\n", total);
	}
}
