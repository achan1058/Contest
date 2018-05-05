#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		vi shops(n);
		read(shops);
		sort(all(shops));
		print("%d", 2 * (shops.back() - shops[0]));
	}
}
