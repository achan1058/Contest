#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<string, int> cube_count;
	map<string, ll> small_cube;
	for (ll i = 1; i <= 2000000; i++) {
		string s = to_string(i * i * i);
		sort(all(s));
		cube_count[s]++;
		if (cube_count[s] == 5) {
			printf("%lld\n", small_cube[s]);
			break;
		} else if (cube_count[s] == 1) {
			small_cube[s] = i * i * i;
		}
	}
}
