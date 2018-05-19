#include <bits/stdc++.h>
#include "bases.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0)
		print("The parity of %s is %d (mod 2).", to_string(n, 2).c_str(), bits(n));
}
