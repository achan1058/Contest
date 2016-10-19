#include <bits/stdc++.h>
#include "header.h"
#include "message.h"
#include "again.h"

int main() {
	int nodes = NumberOfNodes(), my_id = MyNodeId(), N = GetN();
	ll tA = 0, tB = 0;
	for (int i = my_id; i < GetN(); i += nodes) {
		tA = add(tA, GetA(i));
		tB = add(tB, GetB(i));
	}
	PutLL(0, tA);
	PutLL(0, tB);
	Send(0);

	if (my_id == 0) {
		vl A(nodes), B(nodes);
		ll totalA = 0, totalB = 0;
		for (int i = 0; i < nodes; i++) {
			Receive(i);
			A[i] = GetLL(i);
			B[i] = GetLL(i);
			totalA = add(totalA, A[i]);
			totalB = add(totalB, B[i]);
		}

		ll ans = mul(totalA, totalB);
		ans = add(ans, mod - mul(A[0], B[0]));
		for (int i = 1; i < nodes; i++)
			ans = add(ans, mod - mul(A[i], B[nodes - i]));
		printf("%lld\n", ans);
	}
	return 0;
}
