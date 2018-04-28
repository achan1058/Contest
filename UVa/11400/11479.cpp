#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vl sides(3);
		read(sides);
		sort(all(sides));
		if (sides[0] <= 0 || sides[0] + sides[1] <= sides[2])
			printc("Invalid");
		else if (sides[0] == sides[2])
			printc("Equilateral");
		else if (sides[0] == sides[1] || sides[1] == sides[2])
			printc("Isosceles");
		else
			printc("Scalene");
	}
}
