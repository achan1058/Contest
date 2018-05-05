#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0)
		print("f91(%d) = %d", n, n > 101 ? n - 10 : 91);
}
