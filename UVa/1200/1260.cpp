#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, ans = 0;
		cin >> n;
		vi sales(n);
		read(sales);
		drep(i, j, n, i) {
			if (sales[i] >= sales[j])
				ans++;
		}
		print("%d", ans);
	}
}
