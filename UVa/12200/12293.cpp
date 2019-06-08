#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0)
		print(bits(n + 1) == 1 ? "Bob" : "Alice");
}
