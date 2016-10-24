#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vl a(3);
		read(a);
		sort(all(a));
		if (a[0] <= 0 || a[0] + a[1] <= a[2])
			printc("Invalid\n");
		else if (a[0] == a[2])
			printc("Equilateral\n");
		else if (a[0] == a[1] || a[1] == a[2])
			printc("Isosceles\n");
		else
			printc("Scalene\n");
	}
}
