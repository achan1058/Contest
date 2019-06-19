#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi src(3), tar(3);
	read(tar);
	read(src);
	bool good = true;
	rrep(i, 2, 0) {
		rrep(j, i, 0) {
			int t = min(tar[i], src[j]);
			tar[i] -= t;
			src[j] -= t;
		}
		good = good && tar[i] == 0;
	}
	print(good ? "YES" : "NO");
}
