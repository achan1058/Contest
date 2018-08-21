#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		stack<int> s;
		queue<int> q;
		priority_queue<int> p;
		bool is_stack = true, is_queue = true, is_priority = true;
		int m, k;
		rep(i, 0, n) {
			cin >> m >> k;
			if (m == 1) {
				s.push(k);
				q.push(k);
				p.push(k);
			} else {
				if (s.empty()) {
					is_stack = is_queue = is_priority = false;
					continue;
				}
				{
					int v = s.top();
					s.pop();
					is_stack = is_stack && v == k;
				}
				{
					int v = q.front();
					q.pop();
					is_queue = is_queue && v == k;
				}
				{
					int v = p.top();
					p.pop();
					is_priority = is_priority && v == k;
				}
			}
		}
		if (!is_stack && !is_queue && !is_priority)
			print("impossible");
		else if (!is_stack && !is_queue)
			print("priority queue");
		else if (!is_stack && !is_priority)
			print("queue");
		else if (!is_queue && !is_priority)
			print("stack");
		else
			print("not sure");
	}
}
