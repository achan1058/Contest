#include <bits/stdc++.h>
#include "header.h"
#include "message.h"
#include "mutexes.h"

int main() {
	int n = NumberOfOperations(0) - 1, m = NumberOfOperations(1) - 1, numnode = NumberOfNodes(), nodeid = MyNodeId();
	int left = (n / numnode) * nodeid, right = (n / numnode) * (nodeid + 1);
	if (nodeid == numnode - 1)
		right = n;

	vb leftmut(100001);
	rep(i, 0, left) {
		int op = GetOperation(0, i);
		if (op > 0)
			leftmut[op] = true;
		else
			leftmut[-op] = false;
	}

	int max_opt = inf;
	rep(i, left, right) {
		int op = GetOperation(0, i);
		if (op > 0)
			leftmut[op] = true;
		else
			leftmut[-op] = false;

		vb rightmut(100001);
		int conflict = 0;
		rep(j, 0, m) {
			op = GetOperation(1, j);
			if (op < 0) {
				rightmut[-op] = false;
				if (leftmut[-op])
					conflict--;
			} else {
				rightmut[op] = true;
				if (leftmut[op])
					conflict++;
			}
			if (conflict == 0) {
				int o1 = GetOperation(0, i + 1), o2 = GetOperation(1, j + 1);
				if (o1 > 0 && o2 > 0 && leftmut[o2] && rightmut[o1]) {
					max_opt = min(max_opt, i + j + 4);
					break;
				}
			}
		}
	}

	PutInt(0, max_opt);
	Send(0);

	if (nodeid == 0) {
		int mx = inf;
		rep(i, 0, numnode) {
			Receive(i);
			mx = min(mx, GetInt(i));
		}

		if (mx == inf)
			printf("OK\n");
		else
			printf("%d\n", mx);
	}
}
