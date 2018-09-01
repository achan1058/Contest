#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		double l, w, r;
		cin >> l;
		w = l / 5 * 3;
		r = l / 5;
		double circ = r * r * M_PI, rect = w * l - circ;
		print("%.2f %.2f", circ, rect);
	}
}
