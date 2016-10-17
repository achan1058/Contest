#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int op, val;
		stack<int> sta;
		queue<int> que;
		priority_queue<int> pri;
		int isStack = 1, isQueue = 1, isPrior = 1;
		rep(i, 0, n) {
			cin >> op >> val;
			if (op == 1) {
				sta.push(val);
				que.push(val);
				pri.push(val);
			} else {
				if (sta.empty()) {
					isStack = isQueue = isPrior = 0;
					continue;
				}

				if (sta.top() != val)
					isStack = 0;
				if (que.front() != val)
					isQueue = 0;
				if (pri.top() != val)
					isPrior = 0;

				sta.pop();
				que.pop();
				pri.pop();
			}
		}

		if (isStack + isQueue + isPrior > 1)
			printf("not sure\n");
		else if (isStack + isQueue + isPrior == 0)
			printf("impossible\n");
		else if (isStack)
			printf("stack\n");
		else if (isQueue)
			printf("queue\n");
		else
			printf("priority queue\n");
	}
}
