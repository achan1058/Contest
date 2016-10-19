#include <bits/stdc++.h>
#include "header.h"
#include "message.h"
#include "oops.h"

int main() {
	int N = GetN(), nodes = NumberOfNodes(), my_id = MyNodeId();
	int left = (N / nodes) * my_id, right = (N / nodes) * (my_id + 1);
	if (my_id == nodes - 1)
		right = N;

	ll mn = GetNumber(left), mx = GetNumber(left);

	rep(i, left + 1, right) {
		ll num = GetNumber(i);
		mn = min(mn, num);
		mx = max(mx, num);
	}

	PutLL(0, mn);
	PutLL(0, mx);
	Send(0);

	if (my_id == 0) {
		rep(i, 0, nodes) {
			Receive(i);
			mn = min(mn, GetLL(i));
			mx = max(mx, GetLL(i));
		}
		printf("%lld\n", mx - mn);
	}

	return 0;
}
