#include <bits/stdc++.h>
#include "number_theory.h"
#include "header.h"

int main() {
	int a, b;
	while (cin >> a >> b) {
		auto ans = egcd(a, b);
		print("%d %d %d", get<1>(ans), get<2>(ans), get<0>(ans));
	}
}
