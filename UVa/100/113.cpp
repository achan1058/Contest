#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	double p;
	while (cin >> n >> p)
		printv(int(round(exp(log(p) / n))));
}
