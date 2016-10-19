#include <bits/stdc++.h>
#include "header.h"
#include "message.h"
#include "sandwich_1.h"

int main() {
	int n = GetN(), numnode = NumberOfNodes(), nodeid = MyNodeId();
	int left = (n / numnode) * nodeid, right = (n / numnode) * (nodeid + 1);
	if (nodeid == numnode - 1)
		right = n;

	ll total = 0, bestleft = 0, bestright = 0, best = 0, cur = 0, curleft = 0, curright = 0;

	rep(i, left, right) {
		ll taste = -GetTaste(i);
		total += taste;
		cur += taste;
		curleft += taste;
		curright -= taste;

		cur = max(cur, 0ll);
		best = max(best, cur);
		bestleft = max(bestleft, curleft);
		bestright = max(bestright, curright);
	}

	PutLL(0, total);
	PutLL(0, best);
	PutLL(0, bestleft);
	PutLL(0, bestright + total);
	Send(0);

	if (nodeid == 0) {
		vl totalarr(numnode + 2), bestarr(numnode + 2), bestleftarr(numnode + 2), bestrightarr(numnode + 2);
		ll ans = 0, bigtotal = 0;
		rep(i, 0, numnode) {
			Receive(i);
			totalarr[i + 1] = GetLL(i);
			bestarr[i + 1] = GetLL(i);
			bestleftarr[i + 1] = GetLL(i);
			bestrightarr[i + 1] = GetLL(i);
			bigtotal += totalarr[i + 1];
		}

		rep(i, 0, numnode + 2) {
			ans = max(ans, bestarr[i]);
			ll totallen = 0;
			rep(j, i + 1, numnode + 2) {
				ans = max(ans, bestrightarr[i] + bestleftarr[j] + totallen);
				totallen += totalarr[j];
			}
		}

		printf("%lld\n", ans - bigtotal);
	}
}
