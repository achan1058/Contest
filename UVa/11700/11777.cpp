#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int total = 0, t1, t2, f, a;
		vi c(3);
		cin >> t1 >> t2 >> f >> a;
		read(c);
		sort(all(c));
		total = t1 + t2 + f + a + (c[1] + c[2]) / 2;
		if (total >= 90)
			printc("A");
		else if (total >= 80)
			printc("B");
		else if (total >= 70)
			printc("C");
		else if (total >= 60)
			printc("D");
		else
			printc("F");
	}
}
