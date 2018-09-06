#include <bits/stdc++.h>
#include "triangle.h"
#include "header.h"

int main() {
	vd sides(3);
	while (read(sides)) {
		sort(all(sides));
		double ans = -1;
		if (sides[0] > eps && sides[0] + sides[1] > sides[2] + eps) {
			ans = sss_area(sides[0], sides[1], sides[2]) * 4 / 3;
		}
		print("%.3f", ans);
	}
}
