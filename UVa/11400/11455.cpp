#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vl sides(4);
		read(sides);
		sort(all(sides));
		if (sides[0] + sides[1] + sides[2] <= sides[3])
			print("banana");
		else if (sides[0] != sides[1] || sides[2] != sides[3])
			print("quadrangle");
		else if (sides[1] != sides[2])
			print("rectangle");
		else
			print("square");
	}
}
