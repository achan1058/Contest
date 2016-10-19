#include <bits/stdc++.h>
#include "header.h"
#include "message.h"
#include "almost_sorted_1.h"

int main() {
	int n = NumberOfFiles(), numnode = NumberOfNodes(), nodeid = MyNodeId();
	int left = (n / numnode) * nodeid, right = (n / numnode) * (nodeid + 1);
	if (nodeid == numnode - 1)
		right = n;

	int bigleft = left - MaxDistance(), bigright = right + MaxDistance();

	bigleft = max(0, bigleft);
	bigright = min(n, bigright);

	vl id(bigright - bigleft);
	rep(i, bigleft, bigright)
		id[i - bigleft] = Identifier(i);

	sort(all(id));
	ll total = 0;

	rep(i, left, right) {
		total += (id[i - bigleft] % (1 << 20)) * i;
		total %= (1 << 20);
	}

	PutLL(0, total);
	Send(0);

	if (nodeid == 0) {
		total = 0;
		rep(i, 0, numnode) {
			Receive(i);
			total += GetLL(i);
			total %= (1 << 20);
		}

		printf("%lld\n", total);
	}
}
