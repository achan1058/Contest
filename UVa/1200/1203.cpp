#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int id, t;
	priority_queue<tuple<int, int, int>> q;
	while (cin >> s && s != "#") {
		cin >> id >> t;
		q.push({ -t, -id, -t });
	}
	cin >> t;
	rep(i, 0, t) {
		auto v = q.top();
		q.pop();
		printv(-get<1>(v));
		q.push({ get<0>(v) + get<2>(v), get<1>(v), get<2>(v) });
	}
}
