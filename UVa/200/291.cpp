#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s = "112233455";
	while (s[0] == '1') {
		vvb arr = mb(5, 5, false);
		rep(i, 1, sz(s)) {
			int v1 = s[i - 1] - '1', v2 = s[i] - '1';
			arr[v1][v2] = true;
			arr[v2][v1] = true;
		}

		if (arr[0][1] && arr[0][2] && arr[0][4] && arr[1][2] && arr[1][4] && arr[2][3] && arr[2][4] && arr[3][4])
			printf("%s\n", s.c_str());

		next_permutation(all(s));
	}
}
