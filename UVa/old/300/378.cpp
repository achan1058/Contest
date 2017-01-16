#include <bits/stdc++.h>
#include "double.h"
#include "line.h"

int main() {
	point<Double> p11, p12, p21, p22;
	printf("INTERSECTING LINES OUTPUT\n");
	forX() {
		cin >> p11 >> p12 >> p21 >> p22;
		Line<Double> l1(p11, p12), l2(p21, p22);
		point<Double> p = l1.intersect(l2);

		if (p.x.v == inf)
			printf("LINE\n");
		else if (p.x.v == -inf)
			printf("NONE\n");
		else
			printf("POINT %.2f %.2f\n", p.x, p.y);
	}
	printf("END OF OUTPUT\n");
}
