#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int r1, r2, v, count = 0, last;
		vb vt(17);
		cin >> r1;
		drep(i, j, 4, 4) {
			cin >> v;
			if (i == r1 - 1)
				vt[v] = true;
		}

		cin >> r2;
		drep(i, j, 4, 4) {
			cin >> v;
			if (i == r2 - 1 && vt[v]) {
				last = v;
				count++;
			}
		}

		if (count > 1)
			printp("Bad magician!\n");
		else if (count == 0)
			printp("Volunteer cheated!\n");
		else
			printp("%d\n", last);
	}
}