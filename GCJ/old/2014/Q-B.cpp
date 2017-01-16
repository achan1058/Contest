#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		double C, F, XX;
		cin >> C >> F >> XX;
		double base = 2, t1 = inf, t2 = XX / base, cur = 0;

		do {
			t1 = t2;
			double buy = C / base;
			cur += buy;
			base += F;
			t2 = cur + XX / base;
		} while (t2 < t1);

		printp("%.7f\n", t1);
	}
}