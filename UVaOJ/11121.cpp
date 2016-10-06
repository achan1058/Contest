#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 1, N + 1) {
		string out;
		int sign = 1;
		cin >> n;
		while (n != 0) {
			if (n % 2 == 0)
				out.pb('0');
			else {
				n -= sign;
				out.pb('1');
			}
			n /= 2;
			sign *= -1;
		}
		if (out == "")
			out = "0";
		reverse(all(out));
		printf("Case #%d: %s\n", X, out.c_str());
	}
}
