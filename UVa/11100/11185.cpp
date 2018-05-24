#include <bits/stdc++.h>
#include "bases.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n && n >= 0)
		print("%s", to_string(n, 3).c_str());
}
