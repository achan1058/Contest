#include <bits/stdc++.h>
#include "circle.h"

int main() {
	ptd a, b, c;
	while (cin >> a >> b >> c)
		printf("%.2f\n", Circle<double>(a, b, c).radius() * 2 * M_PI);
}
