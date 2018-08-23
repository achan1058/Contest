#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m && (n | m) != 0) {
		vi num1(n), num2(m);
		read(num1);
		read(num2);

		int t1 = 0, t2 = 0, ans = 0;
		while(t1 < n && t2 < m) {
			if (num1[t1] == num2[t2]) {
				t1++;
				t2++;
				ans++;
			} else if (num1[t1] < num2[t2]) {
				t1++;
			} else {
				t2++;
			}
		}
		print("%d", ans);
	}
}
