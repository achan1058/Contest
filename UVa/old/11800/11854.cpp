#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi v(3);
	while (read(v), (v[0] | v[1] | v[2]) != 0) {
		sort(all(v));
		printf("%s\n", v[0] * v[0] + v[1] * v[1] == v[2] * v[2] ? "right" : "wrong");
	}
}
