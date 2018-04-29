#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	ll total = 0, v;
	forX() {
		cin >> s;
		if (s == "donate") {
			cin >> v;
			total += v;
		} else {
			print("%lld", total);
		}
	}
}
