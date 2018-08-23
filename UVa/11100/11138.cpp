#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int l, g;
		cin >> g >> l;
		if (l % g == 0)
			print("%d %d", g, l);
		else
			print("-1");
	}
}
