#include <bits/stdc++.h>
#include "header.h"

int main() {
	priority_queue<ll> q;
	q.push(-1);
	int count = 1;
	ll prev = 1;
	rep(i, 0, 1500) {
		ll next = q.top();
		q.pop();
		if (next == prev) {
			i--;
			continue;
		}

		q.push(2 * next);
		q.push(3 * next);
		q.push(5 * next);
		prev = next;
	}
	print("The 1500'th ugly number is %lld.", -prev);
}
