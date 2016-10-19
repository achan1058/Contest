#include <bits/stdc++.h>
#include "header.h"
#include "message.h"
#include "lisp_plus_plus.h"

int main() {
	int nodes = NumberOfNodes(), my_id = MyNodeId(), N = GetLength();
	int left = (N / nodes) * my_id, right = (N / nodes) * (my_id + 1);
	if (my_id == nodes - 1)
		right = N;
	int count = 0;
	vi deficit;
	for (int i = left; i < right; i++) {
		if (GetCharacter(i) == '(')
			count++;
		else {
			count--;
			if (-count > sz(deficit))
				deficit.push_back(i);
		}
	}

	PutInt(0, count);
	PutInt(0, sz(deficit));
	Send(0);

	if (my_id == 0) {
		int badid = -1, badcnt = 0;
		int totalcount = 0;
		for (int i = 0; i < nodes; i++) {
			Receive(i);
			int cnt = GetInt(i), mn = GetInt(i);
			if (totalcount - mn < 0 && badid == -1) {
				badid = i;
				badcnt = totalcount;
			}
			totalcount += cnt;
		}

		int ans = (sz(deficit) == 0 ? -1 : deficit[0]);
		for (int i = 1; i < nodes; i++) {
			PutInt(i, badcnt);
			Send(i);
			Receive(i);
			int testans = GetInt(i);
			if (badid == i)
				ans = testans;
		}

		if (badid != -1)
			printf("%d\n", ans);
		else if (totalcount == 0)
			printf("-1\n");
		else
			printf("%d\n", N);
	} else {
		Receive(0);
		int badcnt = GetInt(0);
		if (badcnt >= sz(deficit))
			PutInt(0, -1);
		else
			PutInt(0, deficit[badcnt]);
		Send(0);
	}

	return 0;
}
