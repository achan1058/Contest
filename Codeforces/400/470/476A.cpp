#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	cin >> n >> m;
	int mn = (n + 1) / 2, ans = (mn + m - 1) / m * m;
	print(ans <= n ? ans : -1);
}
