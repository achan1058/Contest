#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, c, d, e;
	while (cin >> a >> b >> c >> d >> e && (a | b | c | d | e) != 0)
		printv(a * b * c * d * d * e * e);
}
