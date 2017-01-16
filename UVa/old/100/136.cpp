#include <bits/stdc++.h>
#include "header.h";

int main() {
	priority_queue<ll, vl, greater<ll>> ugly;
	ugly.push(1);
	rep(i, 1, 1500) {
		ll u = ugly.top();
		ugly.push(2 * u);
		ugly.push(3 * u);
		ugly.push(5 * u);

		while (ugly.top() == u)
			ugly.pop();
	}
	printf("The 1500'th ugly number is %lld.\n", ugly.top());
}
