#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi tri(3);
	while (cin >> tri[0] >> tri[1] >> tri[2] && (tri[0] | tri[1] | tri[2] != 0)) {
		sort(all(tri));
		print("%s", tri[0] * tri[0] + tri[1] * tri[1] == tri[2] * tri[2] ? "right" : "wrong");
	}
}
