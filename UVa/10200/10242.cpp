#include <bits/stdc++.h>
#include "point.h"
#include "header.h"

int main() {
	ptd p1, p2, p3, p4;
	while (cin >> p1 >> p2 >> p3 >> p4) {
		ptd ans;
		if (p1 == p3)
			ans = p2 + p4 - p1;
		else if (p1 == p4)
			ans = p2 + p3 - p1;
		else if (p2 == p3)
			ans = p1 + p4 - p2;
		else if (p2 == p4)
			ans = p1 + p3 - p2;
		print("%.3f %.3f", ans.x, ans.y);
	}
}
