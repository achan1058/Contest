#include <bits/stdc++.h>
#include "header.h"

ll numCustomers(vl& barbers, ll time) {
	if (time < 0)
		return 0;
	ll served = 0;
	irep(b, barbers)
		served += time / b + 1;
	return served;
}

ll binary_search(vl& barbers, ll num, ll mn = 0, ll mx = 1000000000000000000ll) {
	while (mn != mx) {
		ll mid = (mn + mx) / 2;
		if (numCustomers(barbers, mid) >= num)
			mx = mid;
		else mn = mid + 1;
	}
	return mn;
}

int main() {
	int n, num;
	forX() {
		cin >> n >> num;
		vl barbers(n);
		read(barbers);

		ll time = binary_search(barbers, num);
		num -= int(numCustomers(barbers, time - 1));

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
