#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c, w;
	while (cin >> r >> c >> w && (r | c | w) != 0)
		print(((r - 7) * (c - 7) + w) / 2);
}
