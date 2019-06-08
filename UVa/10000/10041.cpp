#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, ans = 0;
		cin >> n;
		vi houses(n);
		read(houses);
		sort(all(houses));
		irep(v, houses)
			ans += abs(v - houses[n / 2]);
		printv(ans);
	}
}
