#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k, n, w;
	cin >> k >> n >> w;
	int total = w * (w + 1) / 2 * k;
	print(max(0, total - n));
}
