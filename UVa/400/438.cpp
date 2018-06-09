#include <bits/stdc++.h>
#include "circle.h"
#include "header.h"

int main() {
	ptd p1, p2, p3;
	while (cin >> p1 >> p2 >> p3)
		print("%.2f", Circle<double>(p1, p2, p3).radius() * 2 * M_PI);
}
