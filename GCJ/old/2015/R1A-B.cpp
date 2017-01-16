#include <bits/stdc++.h>
#include "binary_search.h"

int num;
vl barbers;
ll numCustomers(ll time) {
	if (time < 0)
		return num;
	ll served = 0;
	irep(b, barbers)
		served += time / b + 1;
	return max(0ll, num - served);
}

int main() {
	int n;
	forX() {
		cin >> n >> num;
		barbers.resize(n);
		read(barbers);

		ll time = binarySearch(numCustomers, 0ll, 1000000000000000000ll);
		num = int(numCustomers(time - 1));
		rep(i, 0, n) {
			if (time % barbers[i] == 0) {
				num--;
				if (num == 0) {
					printp(" %d\n", i + 1);
					break;
				}
			}
		}
	}
}
