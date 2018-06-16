#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<int, int> cubes;
	vvi ans;
	rep(i, 2, 201)
		cubes[i * i * i] = i;
	rep(b, 2, 201) {
		rep(c, b, 201) {
			rep(d, c, 201) {
				int sum = b * b * b + c * c * c + d * d * d;
				if (sum > 200 * 200 * 200)
					break;
				if (cubes[sum] != 0)
					ans.pb({ cubes[sum], b, c, d });
			}
		}
	}
	sort(all(ans));
	irep(v, ans)
		print("Cube = %d, Triple = (%d,%d,%d)", v[0], v[1], v[2], v[3]);
}
