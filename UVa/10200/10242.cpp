#include <bits/stdc++.h>
#include "point.h"

int main() {
	ptd p1, p2, p3, p4;
	while (cin >> p1 >> p2 >> p3 >> p4) {
		ptd result;
		if (p1 == p3)
			result = p2 + p4 - p1;
		else if (p1 == p4)
			result = p2 + p3 - p1;
		else if (p2 == p3)
			result = p1 + p4 - p2;
		else if (p2 == p4)
			result = p1 + p3 - p2;
		printf("%.3f %.3f\n", result.x, result.y);
	}
}
