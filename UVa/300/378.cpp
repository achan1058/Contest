#include <bits/stdc++.h>
#include "line.h"
#include "header.h"

int main() {
	print("INTERSECTING LINES OUTPUT");
	forX() {
		vector<ptd> pts(4);
		read(pts);
		Line<double> l1(pts[0], pts[1]), l2(pts[2], pts[3]);
		ptd p = l1.intersect(l2);
		if (p == ptd(inf, inf))
			print("LINE");
		else if (p == ptd(-inf, -inf))
			print("NONE");
		else
			print("POINT %.2f %.2f", p.x, p.y);
	}
	print("END OF OUTPUT");
}
