#include <bits/stdc++.h>
#include "header.h"

int main() {
	priority_queue<ll> q;
	q.push(-1);
	q.push(-inf);
	rep(i, 1, 1500) {
		ll v = q.top();
		q.pop();
		while (q.top() == v)
			q.pop();
		q.push(2 * v);
		q.push(3 * v);
		q.push(5 * v);
	}
	printf("The 1500'th ugly number is %lld.\n", -q.top());
}
