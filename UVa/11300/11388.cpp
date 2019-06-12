#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int l, g;
		cin >> g >> l;
		if (l % g == 0)
			print(g, l);
		else
			print(-1);
	}
}
