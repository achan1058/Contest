#include <bits/stdc++.h>
#include "header.h"

int main() {
	eps = 1e-5;
	double n, p;
	while (cin >> n >> p)
		printf("%d\n", int(pow(p, 1.0 / n) + eps));
}
