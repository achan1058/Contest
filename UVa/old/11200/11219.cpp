#include <bits/stdc++.h>
#include "header.h"

int main() {
	int d1, m1, y1, d2, m2, y2;
	char c;
	forX() {
		cin >> d1 >> c >> m1 >> c >> y1;
		cin >> d2 >> c >> m2 >> c >> y2;
		int year = y1 - y2;
		if (m2 > m1 || (m2 == m1 && d2 > d1))
			year--;

		if (year < 0)
			printp("Invalid birth date\n");
		else if (year > 130)
			printp("Check birth date\n");
		else
			printp("%d\n", year);
	}
}
