#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	int a, b;
	while (cin >> a >> b) {
		tuple<int, int, int> result = egcd(a, b);
		printf("%d %d %d\n", get<1>(result), get<2>(result), get<0>(result));
	}
}
