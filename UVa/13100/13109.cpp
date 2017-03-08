#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, w, v;
		cin >> n >> w;
		vi weight_count(10001);
		rep(i, 0, n) {
			cin >> v;
			weight_count[v]++;
		}
		int ans = 0;
		rep(i, 1, 10001) {
			if (w < i)
				break;
			int num = min(weight_count[i], w / i);
			ans += num;
			w -= i * num;
		}
		printf("%d\n", ans);
	}
}
