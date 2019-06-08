#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, h;
	cin >> n;
	vi heights(n);
	read(heights);

	forX() {
		cin >> h;
		auto lit = lower_bound(all(heights), h);
		if (lit == heights.begin())
			printf("X ");
		else
			printf("%d ", *(lit - 1));
		auto rit = upper_bound(all(heights), h);
		if (rit == heights.end())
			print("X");
		else
			printv(*rit);
	}
}
