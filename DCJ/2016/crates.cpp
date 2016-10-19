#include <bits/stdc++.h>
#include "header.h"
#include "message.h"
#include "crates.h"

int main() {
	int N = GetNumStacks(), nodes = NumberOfNodes(), my_id = MyNodeId();
	int left = (N / nodes) * my_id, right = (N / nodes) * (my_id + 1);
	if (my_id == nodes - 1)
		right = N;

	ll myheight = 0;
	rep(i, left, right)
		myheight += GetStackHeight(i + 1);

	PutLL(0, myheight);
	Send(0);

	if (my_id == 0) {
		vl heights(nodes + 1, 0);
		rep(i, 0, nodes) {
			Receive(i);
			heights[i + 1] = heights[i] + GetLL(i);
		}
		ll average = heights[nodes] / N, addition = heights[nodes] % N;

		rep(i, 0, nodes) {
			int lf = (N / nodes) * i;
			PutLL(i, heights[i]);
			PutLL(i, average);
			PutLL(i, addition);
			Send(i);
		}
	}

	Receive(0);
	ll diff = GetLL(0), average = GetLL(0), addition = GetLL(0), resulttotal = 0;
	diff -= average * left + min(addition, ll(left));

	rep(i, left, right) {
		ll cur = GetStackHeight(i + 1);
		resulttotal += abs(diff);
		resulttotal %= mod;
		diff += cur - (average + (i < addition ? 1 : 0));
	}

	PutLL(0, resulttotal);
	Send(0);

	if (my_id == 0) {
		ll finalresult = 0;
		rep(i, 0, nodes) {
			Receive(i);
			finalresult += GetLL(i);
			finalresult %= mod;
		}
		printf("%lld\n", finalresult);
	}

	return 0;
}
