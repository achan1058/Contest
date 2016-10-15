#include <bits/stdc++.h>
#include "header.h"

vi dp(1 << 12);
int toint(const vi& v) {
	int r = 0;
	irep(x, v) {
		r *= 2;
		r += x;
	}
	return r;
}

void compute(vi& v, int x) {
	int ind = toint(v);
	dp[ind] = x;
	rep(i, 1, 11) {
		if (v[i] == 1) {
			if (v[i - 1] == 0 && v[i + 1] == 1) {
				v[i - 1] = 1;
				v[i] = v[i + 1] = 0;
				dp[ind] = min(dp[ind], dp[toint(v)]);
				v[i - 1] = 0;
				v[i] = v[i + 1] = 1;
			} else if (v[i - 1] == 1 && v[i + 1] == 0) {
				v[i + 1] = 1;
				v[i] = v[i - 1] = 0;
				dp[ind] = min(dp[ind], dp[toint(v)]);
				v[i + 1] = 0;
				v[i] = v[i - 1] = 1;
			}
		}
	}
}

int main() {
	vi b(12, 0);
	rep(x, 0, 13) {
		rep(i, 0, 12 - x)
			b[i] = 0;
		rep(i, 12 - x, 12)
			b[i] = 1;
		do {
			compute(b, x);
		} while (next_permutation(all(b)));
	}

	int n;
	cin >> n;
	rep(X, 0, n) {
		char c;
		rep(i, 0, 12) {
			cin >> c;
			if (c == 'o')
				b[i] = 1;
			else
				b[i] = 0;
		}
		printf("%d\n", dp[toint(b)]);
	}
}
