#include <bits/stdc++.h>
#include "header.h"

int main() {
	int s, n;
	cin >> s >> n;
	vpii dragons(n);
	irep(d, dragons)
		cin >> d.first >> d.second;
	sort(all(dragons));

	bool good = true;
	irep(d, dragons) {
		if (s <= d.first) {
			good = false;
			break;
		}
		s += d.second;
	}
	print(good ? "YES" : "NO");
}
