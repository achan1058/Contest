#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ans;
	ll prev = -1;
	priority_queue<ll> q;
	q.push(-1);
	while (true) {
		ll v = -q.top();
		q.pop();
		if (v > 2000000000)
			break;
		if (v != prev) {
			prev = v;
			ans.pb(v);
			q.push(-2 * v);
			q.push(-3 * v);
			q.push(-5 * v);
			q.push(-7 * v);
		}
	}

	int n;
	while (cin >> n && n != 0) {
		string suffix = "th";
		if (n % 10 == 1 && n % 100 != 11)
			suffix = "st";
		if (n % 10 == 2 && n % 100 != 12)
			suffix = "nd";
		if (n % 10 == 3 && n % 100 != 13)
			suffix = "rd";

		print("The %d%s humble number is %lld.", n, suffix.c_str(), ans[n - 1]);
	}
}
