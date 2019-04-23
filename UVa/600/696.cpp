#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, n, ans = 0;
	whileX(cin >> m >> n && (m | n) != 0) {
		if (m <= 1 || n <= 1) {
			ans = m * n;
		} else if (m == 2 || n == 2) {
			ans = max(m, n);
			if (ans % 4 == 1 || ans % 4 == 3)
				ans++;
			else if (ans % 4 == 2)
				ans += 2;
		} else {
			ans = (m * n + 1) / 2;
		}
		print("%d knights may be placed on a %d row %d column board.", ans, m, n);
	}
}
