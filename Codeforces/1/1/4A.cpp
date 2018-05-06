#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	print("%s", n % 2 == 0 && n >= 4 ? "YES" : "NO");
}
