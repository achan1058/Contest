#include <bits/stdc++.h>
#include "header.h"

int main() {
	double L, D;
	forX() {
		cin >> D >> L;
		printf("%.3f\n", M_PI * L *sqrt(L * L - D * D) / 4);
	}
}
