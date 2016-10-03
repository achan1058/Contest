#include <bits/stdc++.h>
#include "header.h"

int main() {
	priority_queue<ll> q;
	vl humble;
	int n;
	q.push(-1);

	while (sz(humble) < 5842) {
		ll t = q.top();
		q.push(2 * t);
		q.push(3 * t);
		q.push(5 * t);
		q.push(7 * t);
		humble.pb(-t);
		while (q.top() == t)
			q.pop();
	}

	while (cin >> n && n != 0) {
		if (n % 10 == 1 && n % 100 != 11)
			printf("The %dst humble number is %lld.\n", n, humble[n - 1]);
		else if (n % 10 == 2 && n % 100 != 12)
			printf("The %dnd humble number is %lld.\n", n, humble[n - 1]);
		else if (n % 10 == 3 && n % 100 != 13)
			printf("The %drd humble number is %lld.\n", n, humble[n - 1]);
		else
			printf("The %dth humble number is %lld.\n", n, humble[n - 1]);
	}
}
